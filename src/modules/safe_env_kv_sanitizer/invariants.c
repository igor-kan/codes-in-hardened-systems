#include "interface.h"

safe_env_kv_sanitizer_err_t kv_verify_injection_blocked(void) {
    const char* bad1 = "PATH=/bin;rm -rf";
    const char* bad2 = "bad_lower=123";
    const char* good = "LOG_LEVEL=info_2";
    if (kv_parse_strict(bad1, 15).ok) return SAFE_ENV_KV_SANITIZER_ERR_INVARIANT;
    if (kv_parse_strict(bad2, 13).ok) return SAFE_ENV_KV_SANITIZER_ERR_INVARIANT;
    kv_parse_result_t r = kv_parse_strict(good, 16);
    if (!r.ok || r.key_len != 9 || r.val_len != 6) return SAFE_ENV_KV_SANITIZER_ERR_INVARIANT;
    return SAFE_ENV_KV_SANITIZER_OK;
}
