#include "interface.h"

safe_base64url_strict_err_t b64u_validate_len(size_t encoded_len) {
    return ((encoded_len % 4U) == 1U) ? SAFE_BASE64URL_STRICT_ERR_INVALID : SAFE_BASE64URL_STRICT_OK;
}
