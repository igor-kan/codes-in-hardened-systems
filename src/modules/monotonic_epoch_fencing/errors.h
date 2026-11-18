#ifndef MONOTONIC_EPOCH_FENCING_ERRORS_H
#define MONOTONIC_EPOCH_FENCING_ERRORS_H

typedef enum monotonic_epoch_fencing_err {
    MONOTONIC_EPOCH_FENCING_OK = 0,
    MONOTONIC_EPOCH_FENCING_ERR_NULL = -1,
    MONOTONIC_EPOCH_FENCING_ERR_BOUNDS = -2,
    MONOTONIC_EPOCH_FENCING_ERR_INVALID = -3,
    MONOTONIC_EPOCH_FENCING_ERR_OVERFLOW = -4,
    MONOTONIC_EPOCH_FENCING_ERR_INVARIANT = -5
} monotonic_epoch_fencing_err_t;



static inline const char* monotonic_epoch_fencing_err_str(monotonic_epoch_fencing_err_t err) {
    switch (err) {
        case MONOTONIC_EPOCH_FENCING_OK: return "ok";
        case MONOTONIC_EPOCH_FENCING_ERR_NULL: return "null pointer supplied";
        case MONOTONIC_EPOCH_FENCING_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case MONOTONIC_EPOCH_FENCING_ERR_INVALID: return "domain precondition violated";
        case MONOTONIC_EPOCH_FENCING_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case MONOTONIC_EPOCH_FENCING_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* MONOTONIC_EPOCH_FENCING_ERRORS_H */
