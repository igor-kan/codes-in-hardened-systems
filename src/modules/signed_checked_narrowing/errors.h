#ifndef SIGNED_CHECKED_NARROWING_ERRORS_H
#define SIGNED_CHECKED_NARROWING_ERRORS_H

typedef enum signed_checked_narrowing_err {
    SIGNED_CHECKED_NARROWING_OK = 0,
    SIGNED_CHECKED_NARROWING_ERR_NULL = -1,
    SIGNED_CHECKED_NARROWING_ERR_BOUNDS = -2,
    SIGNED_CHECKED_NARROWING_ERR_INVALID = -3,
    SIGNED_CHECKED_NARROWING_ERR_OVERFLOW = -4,
    SIGNED_CHECKED_NARROWING_ERR_INVARIANT = -5
} signed_checked_narrowing_err_t;



static inline const char* signed_checked_narrowing_err_str(signed_checked_narrowing_err_t err) {
    switch (err) {
        case SIGNED_CHECKED_NARROWING_OK: return "ok";
        case SIGNED_CHECKED_NARROWING_ERR_NULL: return "null pointer supplied";
        case SIGNED_CHECKED_NARROWING_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SIGNED_CHECKED_NARROWING_ERR_INVALID: return "domain precondition violated";
        case SIGNED_CHECKED_NARROWING_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SIGNED_CHECKED_NARROWING_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SIGNED_CHECKED_NARROWING_ERRORS_H */
