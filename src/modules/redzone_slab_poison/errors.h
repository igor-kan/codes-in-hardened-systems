#ifndef REDZONE_SLAB_POISON_ERRORS_H
#define REDZONE_SLAB_POISON_ERRORS_H

typedef enum redzone_slab_poison_err {
    REDZONE_SLAB_POISON_OK = 0,
    REDZONE_SLAB_POISON_ERR_NULL = -1,
    REDZONE_SLAB_POISON_ERR_BOUNDS = -2,
    REDZONE_SLAB_POISON_ERR_INVALID = -3,
    REDZONE_SLAB_POISON_ERR_OVERFLOW = -4,
    REDZONE_SLAB_POISON_ERR_INVARIANT = -5
} redzone_slab_poison_err_t;



static inline const char* redzone_slab_poison_err_str(redzone_slab_poison_err_t err) {
    switch (err) {
        case REDZONE_SLAB_POISON_OK: return "ok";
        case REDZONE_SLAB_POISON_ERR_NULL: return "null pointer supplied";
        case REDZONE_SLAB_POISON_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case REDZONE_SLAB_POISON_ERR_INVALID: return "domain precondition violated";
        case REDZONE_SLAB_POISON_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case REDZONE_SLAB_POISON_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* REDZONE_SLAB_POISON_ERRORS_H */
