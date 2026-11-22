#ifndef SLAB_BITMAP_ALLOC_D57_ERRORS_H
#define SLAB_BITMAP_ALLOC_D57_ERRORS_H

typedef enum slab_bitmap_alloc_d57_err {
    SLAB_BITMAP_ALLOC_D57_OK = 0,
    SLAB_BITMAP_ALLOC_D57_ERR_NULL = -1,
    SLAB_BITMAP_ALLOC_D57_ERR_BOUNDS = -2,
    SLAB_BITMAP_ALLOC_D57_ERR_INVALID = -3,
    SLAB_BITMAP_ALLOC_D57_ERR_OVERFLOW = -4,
    SLAB_BITMAP_ALLOC_D57_ERR_INVARIANT = -5
} slab_bitmap_alloc_d57_err_t;



static inline const char* slab_bitmap_alloc_d57_err_str(slab_bitmap_alloc_d57_err_t err) {
    switch (err) {
        case SLAB_BITMAP_ALLOC_D57_OK: return "ok";
        case SLAB_BITMAP_ALLOC_D57_ERR_NULL: return "null pointer supplied";
        case SLAB_BITMAP_ALLOC_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SLAB_BITMAP_ALLOC_D57_ERR_INVALID: return "domain precondition violated";
        case SLAB_BITMAP_ALLOC_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SLAB_BITMAP_ALLOC_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SLAB_BITMAP_ALLOC_D57_ERRORS_H */
