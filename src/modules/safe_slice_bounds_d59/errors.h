#ifndef SAFE_SLICE_BOUNDS_D59_ERRORS_H
#define SAFE_SLICE_BOUNDS_D59_ERRORS_H

typedef enum safe_slice_bounds_d59_err {
    SAFE_SLICE_BOUNDS_D59_OK = 0,
    SAFE_SLICE_BOUNDS_D59_ERR_NULL = -1,
    SAFE_SLICE_BOUNDS_D59_ERR_BOUNDS = -2,
    SAFE_SLICE_BOUNDS_D59_ERR_INVALID = -3,
    SAFE_SLICE_BOUNDS_D59_ERR_OVERFLOW = -4,
    SAFE_SLICE_BOUNDS_D59_ERR_INVARIANT = -5
} safe_slice_bounds_d59_err_t;



static inline const char* safe_slice_bounds_d59_err_str(safe_slice_bounds_d59_err_t err) {
    switch (err) {
        case SAFE_SLICE_BOUNDS_D59_OK: return "ok";
        case SAFE_SLICE_BOUNDS_D59_ERR_NULL: return "null pointer supplied";
        case SAFE_SLICE_BOUNDS_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SAFE_SLICE_BOUNDS_D59_ERR_INVALID: return "domain precondition violated";
        case SAFE_SLICE_BOUNDS_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SAFE_SLICE_BOUNDS_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SAFE_SLICE_BOUNDS_D59_ERRORS_H */
