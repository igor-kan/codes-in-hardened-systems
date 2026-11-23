#ifndef RATE_TOKEN_INT_D58_ERRORS_H
#define RATE_TOKEN_INT_D58_ERRORS_H

typedef enum rate_token_int_d58_err {
    RATE_TOKEN_INT_D58_OK = 0,
    RATE_TOKEN_INT_D58_ERR_NULL = -1,
    RATE_TOKEN_INT_D58_ERR_BOUNDS = -2,
    RATE_TOKEN_INT_D58_ERR_INVALID = -3,
    RATE_TOKEN_INT_D58_ERR_OVERFLOW = -4,
    RATE_TOKEN_INT_D58_ERR_INVARIANT = -5
} rate_token_int_d58_err_t;



static inline const char* rate_token_int_d58_err_str(rate_token_int_d58_err_t err) {
    switch (err) {
        case RATE_TOKEN_INT_D58_OK: return "ok";
        case RATE_TOKEN_INT_D58_ERR_NULL: return "null pointer supplied";
        case RATE_TOKEN_INT_D58_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case RATE_TOKEN_INT_D58_ERR_INVALID: return "domain precondition violated";
        case RATE_TOKEN_INT_D58_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case RATE_TOKEN_INT_D58_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* RATE_TOKEN_INT_D58_ERRORS_H */
