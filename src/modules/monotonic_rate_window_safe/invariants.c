#include "interface.h"

monotonic_rate_window_safe_err_t slim_verify_invariants(const safe_limiter_t* l) {
    return (slim_validate(l) == MONOTONIC_RATE_WINDOW_SAFE_OK)
        ? MONOTONIC_RATE_WINDOW_SAFE_OK
        : MONOTONIC_RATE_WINDOW_SAFE_ERR_INVARIANT;
}
