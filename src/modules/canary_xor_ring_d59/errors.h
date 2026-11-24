#ifndef CANARY_XOR_RING_D59_ERRORS_H
#define CANARY_XOR_RING_D59_ERRORS_H

typedef enum canary_xor_ring_d59_err {
    CANARY_XOR_RING_D59_OK = 0,
    CANARY_XOR_RING_D59_ERR_NULL = -1,
    CANARY_XOR_RING_D59_ERR_BOUNDS = -2,
    CANARY_XOR_RING_D59_ERR_INVALID = -3,
    CANARY_XOR_RING_D59_ERR_OVERFLOW = -4,
    CANARY_XOR_RING_D59_ERR_INVARIANT = -5
} canary_xor_ring_d59_err_t;



static inline const char* canary_xor_ring_d59_err_str(canary_xor_ring_d59_err_t err) {
    switch (err) {
        case CANARY_XOR_RING_D59_OK: return "ok";
        case CANARY_XOR_RING_D59_ERR_NULL: return "null pointer supplied";
        case CANARY_XOR_RING_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CANARY_XOR_RING_D59_ERR_INVALID: return "domain precondition violated";
        case CANARY_XOR_RING_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CANARY_XOR_RING_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CANARY_XOR_RING_D59_ERRORS_H */
