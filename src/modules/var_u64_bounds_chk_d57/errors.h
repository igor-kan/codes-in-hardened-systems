#ifndef VAR_U64_BOUNDS_CHK_D57_ERRORS_H
#define VAR_U64_BOUNDS_CHK_D57_ERRORS_H

typedef enum var_u64_bounds_chk_d57_err {
    VAR_U64_BOUNDS_CHK_D57_OK = 0,
    VAR_U64_BOUNDS_CHK_D57_ERR_NULL = -1,
    VAR_U64_BOUNDS_CHK_D57_ERR_BOUNDS = -2,
    VAR_U64_BOUNDS_CHK_D57_ERR_INVALID = -3,
    VAR_U64_BOUNDS_CHK_D57_ERR_OVERFLOW = -4,
    VAR_U64_BOUNDS_CHK_D57_ERR_INVARIANT = -5
} var_u64_bounds_chk_d57_err_t;



static inline const char* var_u64_bounds_chk_d57_err_str(var_u64_bounds_chk_d57_err_t err) {
    switch (err) {
        case VAR_U64_BOUNDS_CHK_D57_OK: return "ok";
        case VAR_U64_BOUNDS_CHK_D57_ERR_NULL: return "null pointer supplied";
        case VAR_U64_BOUNDS_CHK_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case VAR_U64_BOUNDS_CHK_D57_ERR_INVALID: return "domain precondition violated";
        case VAR_U64_BOUNDS_CHK_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case VAR_U64_BOUNDS_CHK_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* VAR_U64_BOUNDS_CHK_D57_ERRORS_H */
