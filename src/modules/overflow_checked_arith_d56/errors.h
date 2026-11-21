#ifndef OVERFLOW_CHECKED_ARITH_D56_ERRORS_H
#define OVERFLOW_CHECKED_ARITH_D56_ERRORS_H

typedef enum overflow_checked_arith_d56_err {
    OVERFLOW_CHECKED_ARITH_D56_OK = 0,
    OVERFLOW_CHECKED_ARITH_D56_ERR_NULL = -1,
    OVERFLOW_CHECKED_ARITH_D56_ERR_BOUNDS = -2,
    OVERFLOW_CHECKED_ARITH_D56_ERR_INVALID = -3,
    OVERFLOW_CHECKED_ARITH_D56_ERR_OVERFLOW = -4,
    OVERFLOW_CHECKED_ARITH_D56_ERR_INVARIANT = -5
} overflow_checked_arith_d56_err_t;



static inline const char* overflow_checked_arith_d56_err_str(overflow_checked_arith_d56_err_t err) {
    switch (err) {
        case OVERFLOW_CHECKED_ARITH_D56_OK: return "ok";
        case OVERFLOW_CHECKED_ARITH_D56_ERR_NULL: return "null pointer supplied";
        case OVERFLOW_CHECKED_ARITH_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case OVERFLOW_CHECKED_ARITH_D56_ERR_INVALID: return "domain precondition violated";
        case OVERFLOW_CHECKED_ARITH_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case OVERFLOW_CHECKED_ARITH_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* OVERFLOW_CHECKED_ARITH_D56_ERRORS_H */
