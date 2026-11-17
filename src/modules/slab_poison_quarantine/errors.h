#ifndef SLAB_POISON_QUARANTINE_ERRORS_H
#define SLAB_POISON_QUARANTINE_ERRORS_H

typedef enum slab_poison_quarantine_err {
    SLAB_POISON_QUARANTINE_OK = 0,
    SLAB_POISON_QUARANTINE_ERR_NULL = -1,
    SLAB_POISON_QUARANTINE_ERR_BOUNDS = -2,
    SLAB_POISON_QUARANTINE_ERR_INVALID = -3,
    SLAB_POISON_QUARANTINE_ERR_OVERFLOW = -4,
    SLAB_POISON_QUARANTINE_ERR_INVARIANT = -5
} slab_poison_quarantine_err_t;



static inline const char* slab_poison_quarantine_err_str(slab_poison_quarantine_err_t err) {
    switch (err) {
        case SLAB_POISON_QUARANTINE_OK: return "ok";
        case SLAB_POISON_QUARANTINE_ERR_NULL: return "null pointer supplied";
        case SLAB_POISON_QUARANTINE_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SLAB_POISON_QUARANTINE_ERR_INVALID: return "domain precondition violated";
        case SLAB_POISON_QUARANTINE_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SLAB_POISON_QUARANTINE_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SLAB_POISON_QUARANTINE_ERRORS_H */
