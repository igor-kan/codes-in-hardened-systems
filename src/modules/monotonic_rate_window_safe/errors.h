#ifndef MONOTONIC_RATE_WINDOW_SAFE_ERRORS_H
#define MONOTONIC_RATE_WINDOW_SAFE_ERRORS_H

typedef enum monotonic_rate_window_safe_err {
    MONOTONIC_RATE_WINDOW_SAFE_OK = 0,
    MONOTONIC_RATE_WINDOW_SAFE_ERR_NULL = -1,
    MONOTONIC_RATE_WINDOW_SAFE_ERR_BOUNDS = -2,
    MONOTONIC_RATE_WINDOW_SAFE_ERR_INVALID = -3,
    MONOTONIC_RATE_WINDOW_SAFE_ERR_OVERFLOW = -4,
    MONOTONIC_RATE_WINDOW_SAFE_ERR_INVARIANT = -5
} monotonic_rate_window_safe_err_t;



static inline const char* monotonic_rate_window_safe_err_str(monotonic_rate_window_safe_err_t err) {
    switch (err) {
        case MONOTONIC_RATE_WINDOW_SAFE_OK: return "ok";
        case MONOTONIC_RATE_WINDOW_SAFE_ERR_NULL: return "null pointer supplied";
        case MONOTONIC_RATE_WINDOW_SAFE_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case MONOTONIC_RATE_WINDOW_SAFE_ERR_INVALID: return "domain precondition violated";
        case MONOTONIC_RATE_WINDOW_SAFE_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case MONOTONIC_RATE_WINDOW_SAFE_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* MONOTONIC_RATE_WINDOW_SAFE_ERRORS_H */
