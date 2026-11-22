#ifndef REDZONE_CANARY_BUF_D57_ERRORS_H
#define REDZONE_CANARY_BUF_D57_ERRORS_H

typedef enum redzone_canary_buf_d57_err {
    REDZONE_CANARY_BUF_D57_OK = 0,
    REDZONE_CANARY_BUF_D57_ERR_NULL = -1,
    REDZONE_CANARY_BUF_D57_ERR_BOUNDS = -2,
    REDZONE_CANARY_BUF_D57_ERR_INVALID = -3,
    REDZONE_CANARY_BUF_D57_ERR_OVERFLOW = -4,
    REDZONE_CANARY_BUF_D57_ERR_INVARIANT = -5
} redzone_canary_buf_d57_err_t;



static inline const char* redzone_canary_buf_d57_err_str(redzone_canary_buf_d57_err_t err) {
    switch (err) {
        case REDZONE_CANARY_BUF_D57_OK: return "ok";
        case REDZONE_CANARY_BUF_D57_ERR_NULL: return "null pointer supplied";
        case REDZONE_CANARY_BUF_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case REDZONE_CANARY_BUF_D57_ERR_INVALID: return "domain precondition violated";
        case REDZONE_CANARY_BUF_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case REDZONE_CANARY_BUF_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* REDZONE_CANARY_BUF_D57_ERRORS_H */
