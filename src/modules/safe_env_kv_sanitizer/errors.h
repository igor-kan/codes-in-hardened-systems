#ifndef SAFE_ENV_KV_SANITIZER_ERRORS_H
#define SAFE_ENV_KV_SANITIZER_ERRORS_H

typedef enum safe_env_kv_sanitizer_err {
    SAFE_ENV_KV_SANITIZER_OK = 0,
    SAFE_ENV_KV_SANITIZER_ERR_NULL = -1,
    SAFE_ENV_KV_SANITIZER_ERR_BOUNDS = -2,
    SAFE_ENV_KV_SANITIZER_ERR_INVALID = -3,
    SAFE_ENV_KV_SANITIZER_ERR_OVERFLOW = -4,
    SAFE_ENV_KV_SANITIZER_ERR_INVARIANT = -5
} safe_env_kv_sanitizer_err_t;



static inline const char* safe_env_kv_sanitizer_err_str(safe_env_kv_sanitizer_err_t err) {
    switch (err) {
        case SAFE_ENV_KV_SANITIZER_OK: return "ok";
        case SAFE_ENV_KV_SANITIZER_ERR_NULL: return "null pointer supplied";
        case SAFE_ENV_KV_SANITIZER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SAFE_ENV_KV_SANITIZER_ERR_INVALID: return "domain precondition violated";
        case SAFE_ENV_KV_SANITIZER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SAFE_ENV_KV_SANITIZER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SAFE_ENV_KV_SANITIZER_ERRORS_H */
