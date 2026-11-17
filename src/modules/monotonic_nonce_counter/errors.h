#ifndef MONOTONIC_NONCE_COUNTER_ERRORS_H
#define MONOTONIC_NONCE_COUNTER_ERRORS_H

typedef enum monotonic_nonce_counter_err {
    MONOTONIC_NONCE_COUNTER_OK = 0,
    MONOTONIC_NONCE_COUNTER_ERR_NULL = -1,
    MONOTONIC_NONCE_COUNTER_ERR_BOUNDS = -2,
    MONOTONIC_NONCE_COUNTER_ERR_INVALID = -3,
    MONOTONIC_NONCE_COUNTER_ERR_OVERFLOW = -4,
    MONOTONIC_NONCE_COUNTER_ERR_INVARIANT = -5
} monotonic_nonce_counter_err_t;



static inline const char* monotonic_nonce_counter_err_str(monotonic_nonce_counter_err_t err) {
    switch (err) {
        case MONOTONIC_NONCE_COUNTER_OK: return "ok";
        case MONOTONIC_NONCE_COUNTER_ERR_NULL: return "null pointer supplied";
        case MONOTONIC_NONCE_COUNTER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case MONOTONIC_NONCE_COUNTER_ERR_INVALID: return "domain precondition violated";
        case MONOTONIC_NONCE_COUNTER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case MONOTONIC_NONCE_COUNTER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* MONOTONIC_NONCE_COUNTER_ERRORS_H */
