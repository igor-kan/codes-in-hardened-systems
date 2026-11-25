#ifndef TOKEN_BUCKET_RATE_D60_ERRORS_H
#define TOKEN_BUCKET_RATE_D60_ERRORS_H

typedef enum token_bucket_rate_d60_err {
    TOKEN_BUCKET_RATE_D60_OK = 0,
    TOKEN_BUCKET_RATE_D60_ERR_NULL = -1,
    TOKEN_BUCKET_RATE_D60_ERR_BOUNDS = -2,
    TOKEN_BUCKET_RATE_D60_ERR_INVALID = -3,
    TOKEN_BUCKET_RATE_D60_ERR_OVERFLOW = -4,
    TOKEN_BUCKET_RATE_D60_ERR_INVARIANT = -5
} token_bucket_rate_d60_err_t;



static inline const char* token_bucket_rate_d60_err_str(token_bucket_rate_d60_err_t err) {
    switch (err) {
        case TOKEN_BUCKET_RATE_D60_OK: return "ok";
        case TOKEN_BUCKET_RATE_D60_ERR_NULL: return "null pointer supplied";
        case TOKEN_BUCKET_RATE_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case TOKEN_BUCKET_RATE_D60_ERR_INVALID: return "domain precondition violated";
        case TOKEN_BUCKET_RATE_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case TOKEN_BUCKET_RATE_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* TOKEN_BUCKET_RATE_D60_ERRORS_H */
