#include "interface.h"
#include <stdlib.h>
#include <string.h>

constant_time_hex_decode_err_t cthex_verify_invariants(const uint8_t* data, size_t len) {
    char* hex = (char*)malloc(len * 2U + 1U);
    uint8_t* dec = (uint8_t*)malloc(len + 1U);
    if (!hex || !dec) { free(hex); free(dec); return CONSTANT_TIME_HEX_DECODE_ERR_NULL; }
    size_t dl = 0;
    if (cthex_encode(data, len, hex, len * 2U + 1U) != CONSTANT_TIME_HEX_DECODE_OK ||
        cthex_decode(hex, len * 2U, dec, len + 1U, &dl) != CONSTANT_TIME_HEX_DECODE_OK ||
        dl != len || (len > 0 && memcmp(data, dec, len) != 0)) {
        free(hex); free(dec); return CONSTANT_TIME_HEX_DECODE_ERR_INVARIANT;
    }
    free(hex); free(dec);
    return CONSTANT_TIME_HEX_DECODE_OK;
}
