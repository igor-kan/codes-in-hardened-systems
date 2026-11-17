#include "interface.h"

safe_env_kv_sanitizer_err_t kv_validate_char_set(const char* val, size_t vlen) {
    if (!val && vlen > 0) return SAFE_ENV_KV_SANITIZER_ERR_NULL;
    for (size_t i = 0; i < vlen; ++i) {
        unsigned char c = (unsigned char)val[i];
        if (c < 0x20U || c == 0x7FU || c == '`' || c == '$' || c == ';' || c == '|' || c == '&') {
            return SAFE_ENV_KV_SANITIZER_ERR_INVALID;
        }
    }
    return SAFE_ENV_KV_SANITIZER_OK;
}
