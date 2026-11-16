#ifndef CHECKED_I64_MUL_DIV_ERRORS_H
#define CHECKED_I64_MUL_DIV_ERRORS_H

typedef enum checked_i64_mul_div_err {
    CHECKED_I64_MUL_DIV_OK = 0,
    CHECKED_I64_MUL_DIV_ERR_NULL = -1,
    CHECKED_I64_MUL_DIV_ERR_BOUNDS = -2,
    CHECKED_I64_MUL_DIV_ERR_INVALID = -3,
    CHECKED_I64_MUL_DIV_ERR_OVERFLOW = -4,
    CHECKED_I64_MUL_DIV_ERR_INVARIANT = -5
} checked_i64_mul_div_err_t;



static inline const char* checked_i64_mul_div_err_str(checked_i64_mul_div_err_t err) {
    switch (err) {
        case CHECKED_I64_MUL_DIV_OK: return "ok";
        case CHECKED_I64_MUL_DIV_ERR_NULL: return "null pointer supplied";
        case CHECKED_I64_MUL_DIV_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_I64_MUL_DIV_ERR_INVALID: return "domain precondition violated";
        case CHECKED_I64_MUL_DIV_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_I64_MUL_DIV_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_I64_MUL_DIV_ERRORS_H */
