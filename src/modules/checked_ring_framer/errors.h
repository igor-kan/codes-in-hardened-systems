#ifndef CHECKED_RING_FRAMER_ERRORS_H
#define CHECKED_RING_FRAMER_ERRORS_H

typedef enum checked_ring_framer_err {
    CHECKED_RING_FRAMER_OK = 0,
    CHECKED_RING_FRAMER_ERR_NULL = -1,
    CHECKED_RING_FRAMER_ERR_BOUNDS = -2,
    CHECKED_RING_FRAMER_ERR_INVALID = -3,
    CHECKED_RING_FRAMER_ERR_OVERFLOW = -4,
    CHECKED_RING_FRAMER_ERR_INVARIANT = -5
} checked_ring_framer_err_t;



static inline const char* checked_ring_framer_err_str(checked_ring_framer_err_t err) {
    switch (err) {
        case CHECKED_RING_FRAMER_OK: return "ok";
        case CHECKED_RING_FRAMER_ERR_NULL: return "null pointer supplied";
        case CHECKED_RING_FRAMER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_RING_FRAMER_ERR_INVALID: return "domain precondition violated";
        case CHECKED_RING_FRAMER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_RING_FRAMER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_RING_FRAMER_ERRORS_H */
