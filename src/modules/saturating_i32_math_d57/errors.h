#ifndef SATURATING_I32_MATH_D57_ERRORS_H
#define SATURATING_I32_MATH_D57_ERRORS_H

typedef enum saturating_i32_math_d57_err {
    SATURATING_I32_MATH_D57_OK = 0,
    SATURATING_I32_MATH_D57_ERR_NULL = -1,
    SATURATING_I32_MATH_D57_ERR_BOUNDS = -2,
    SATURATING_I32_MATH_D57_ERR_INVALID = -3,
    SATURATING_I32_MATH_D57_ERR_OVERFLOW = -4,
    SATURATING_I32_MATH_D57_ERR_INVARIANT = -5
} saturating_i32_math_d57_err_t;



static inline const char* saturating_i32_math_d57_err_str(saturating_i32_math_d57_err_t err) {
    switch (err) {
        case SATURATING_I32_MATH_D57_OK: return "ok";
        case SATURATING_I32_MATH_D57_ERR_NULL: return "null pointer supplied";
        case SATURATING_I32_MATH_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SATURATING_I32_MATH_D57_ERR_INVALID: return "domain precondition violated";
        case SATURATING_I32_MATH_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SATURATING_I32_MATH_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SATURATING_I32_MATH_D57_ERRORS_H */
