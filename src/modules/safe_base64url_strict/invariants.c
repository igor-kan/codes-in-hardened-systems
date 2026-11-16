#include "interface.h"
#include <stdlib.h>
#include <string.h>

safe_base64url_strict_err_t b64u_verify_invariants(const uint8_t* data, size_t len) {
    size_t ecap = (len + 2U) * 2U + 4U;
    char* enc = (char*)malloc(ecap);
    uint8_t* dec = (uint8_t*)malloc(len + 4U);
    if (!enc || !dec) { free(enc); free(dec); return SAFE_BASE64URL_STRICT_ERR_NULL; }
    size_t el = 0, dl = 0;
    if (b64u_encode(data, len, enc, ecap, &el) != SAFE_BASE64URL_STRICT_OK ||
        b64u_decode_strict(enc, el, dec, len + 4U, &dl) != SAFE_BASE64URL_STRICT_OK ||
        dl != len || (len > 0 && memcmp(data, dec, len) != 0)) {
        free(enc); free(dec); return SAFE_BASE64URL_STRICT_ERR_INVARIANT;
    }
    free(enc); free(dec);
    return SAFE_BASE64URL_STRICT_OK;
}
