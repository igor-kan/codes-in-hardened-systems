#ifndef CANARY_FRAMED_RING_FIFO_ERRORS_H
#define CANARY_FRAMED_RING_FIFO_ERRORS_H

typedef enum canary_framed_ring_fifo_err {
    CANARY_FRAMED_RING_FIFO_OK = 0,
    CANARY_FRAMED_RING_FIFO_ERR_NULL = -1,
    CANARY_FRAMED_RING_FIFO_ERR_BOUNDS = -2,
    CANARY_FRAMED_RING_FIFO_ERR_INVALID = -3,
    CANARY_FRAMED_RING_FIFO_ERR_OVERFLOW = -4,
    CANARY_FRAMED_RING_FIFO_ERR_INVARIANT = -5
} canary_framed_ring_fifo_err_t;



static inline const char* canary_framed_ring_fifo_err_str(canary_framed_ring_fifo_err_t err) {
    switch (err) {
        case CANARY_FRAMED_RING_FIFO_OK: return "ok";
        case CANARY_FRAMED_RING_FIFO_ERR_NULL: return "null pointer supplied";
        case CANARY_FRAMED_RING_FIFO_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CANARY_FRAMED_RING_FIFO_ERR_INVALID: return "domain precondition violated";
        case CANARY_FRAMED_RING_FIFO_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CANARY_FRAMED_RING_FIFO_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CANARY_FRAMED_RING_FIFO_ERRORS_H */
