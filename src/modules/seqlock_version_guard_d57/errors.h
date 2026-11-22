#ifndef SEQLOCK_VERSION_GUARD_D57_ERRORS_H
#define SEQLOCK_VERSION_GUARD_D57_ERRORS_H

typedef enum seqlock_version_guard_d57_err {
    SEQLOCK_VERSION_GUARD_D57_OK = 0,
    SEQLOCK_VERSION_GUARD_D57_ERR_NULL = -1,
    SEQLOCK_VERSION_GUARD_D57_ERR_BOUNDS = -2,
    SEQLOCK_VERSION_GUARD_D57_ERR_INVALID = -3,
    SEQLOCK_VERSION_GUARD_D57_ERR_OVERFLOW = -4,
    SEQLOCK_VERSION_GUARD_D57_ERR_INVARIANT = -5
} seqlock_version_guard_d57_err_t;



static inline const char* seqlock_version_guard_d57_err_str(seqlock_version_guard_d57_err_t err) {
    switch (err) {
        case SEQLOCK_VERSION_GUARD_D57_OK: return "ok";
        case SEQLOCK_VERSION_GUARD_D57_ERR_NULL: return "null pointer supplied";
        case SEQLOCK_VERSION_GUARD_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SEQLOCK_VERSION_GUARD_D57_ERR_INVALID: return "domain precondition violated";
        case SEQLOCK_VERSION_GUARD_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SEQLOCK_VERSION_GUARD_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SEQLOCK_VERSION_GUARD_D57_ERRORS_H */
