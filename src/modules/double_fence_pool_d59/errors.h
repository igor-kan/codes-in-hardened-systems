#ifndef DOUBLE_FENCE_POOL_D59_ERRORS_H
#define DOUBLE_FENCE_POOL_D59_ERRORS_H

typedef enum double_fence_pool_d59_err {
    DOUBLE_FENCE_POOL_D59_OK = 0,
    DOUBLE_FENCE_POOL_D59_ERR_NULL = -1,
    DOUBLE_FENCE_POOL_D59_ERR_BOUNDS = -2,
    DOUBLE_FENCE_POOL_D59_ERR_INVALID = -3,
    DOUBLE_FENCE_POOL_D59_ERR_OVERFLOW = -4,
    DOUBLE_FENCE_POOL_D59_ERR_INVARIANT = -5
} double_fence_pool_d59_err_t;



static inline const char* double_fence_pool_d59_err_str(double_fence_pool_d59_err_t err) {
    switch (err) {
        case DOUBLE_FENCE_POOL_D59_OK: return "ok";
        case DOUBLE_FENCE_POOL_D59_ERR_NULL: return "null pointer supplied";
        case DOUBLE_FENCE_POOL_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case DOUBLE_FENCE_POOL_D59_ERR_INVALID: return "domain precondition violated";
        case DOUBLE_FENCE_POOL_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case DOUBLE_FENCE_POOL_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* DOUBLE_FENCE_POOL_D59_ERRORS_H */
