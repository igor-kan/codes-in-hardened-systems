#ifndef SAFE_BASE64URL_STRICT_ERRORS_H
#define SAFE_BASE64URL_STRICT_ERRORS_H

typedef enum safe_base64url_strict_err {
    SAFE_BASE64URL_STRICT_OK = 0,
    SAFE_BASE64URL_STRICT_ERR_NULL = -1,
    SAFE_BASE64URL_STRICT_ERR_BOUNDS = -2,
    SAFE_BASE64URL_STRICT_ERR_INVALID = -3,
    SAFE_BASE64URL_STRICT_ERR_OVERFLOW = -4,
    SAFE_BASE64URL_STRICT_ERR_INVARIANT = -5
} safe_base64url_strict_err_t;



static inline const char* safe_base64url_strict_err_str(safe_base64url_strict_err_t err) {
    switch (err) {
        case SAFE_BASE64URL_STRICT_OK: return "ok";
        case SAFE_BASE64URL_STRICT_ERR_NULL: return "null pointer supplied";
        case SAFE_BASE64URL_STRICT_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SAFE_BASE64URL_STRICT_ERR_INVALID: return "domain precondition violated";
        case SAFE_BASE64URL_STRICT_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SAFE_BASE64URL_STRICT_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SAFE_BASE64URL_STRICT_ERRORS_H */
