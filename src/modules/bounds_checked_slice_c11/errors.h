#ifndef BOUNDS_CHECKED_SLICE_C11_ERRORS_H
#define BOUNDS_CHECKED_SLICE_C11_ERRORS_H

typedef enum bounds_checked_slice_c11_err {
    BOUNDS_CHECKED_SLICE_C11_OK = 0,
    BOUNDS_CHECKED_SLICE_C11_ERR_NULL = -1,
    BOUNDS_CHECKED_SLICE_C11_ERR_BOUNDS = -2,
    BOUNDS_CHECKED_SLICE_C11_ERR_INVALID = -3,
    BOUNDS_CHECKED_SLICE_C11_ERR_OVERFLOW = -4,
    BOUNDS_CHECKED_SLICE_C11_ERR_INVARIANT = -5
} bounds_checked_slice_c11_err_t;



static inline const char* bounds_checked_slice_c11_err_str(bounds_checked_slice_c11_err_t err) {
    switch (err) {
        case BOUNDS_CHECKED_SLICE_C11_OK: return "ok";
        case BOUNDS_CHECKED_SLICE_C11_ERR_NULL: return "null pointer supplied";
        case BOUNDS_CHECKED_SLICE_C11_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case BOUNDS_CHECKED_SLICE_C11_ERR_INVALID: return "domain precondition violated";
        case BOUNDS_CHECKED_SLICE_C11_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case BOUNDS_CHECKED_SLICE_C11_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* BOUNDS_CHECKED_SLICE_C11_ERRORS_H */
