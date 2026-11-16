#include "interface.h"

monotonic_rate_window_safe_err_t slim_validate(const safe_limiter_t* l) {
    if (!l) return MONOTONIC_RATE_WINDOW_SAFE_ERR_NULL;
    if (l->capacity == 0 || l->tokens > l->capacity) return MONOTONIC_RATE_WINDOW_SAFE_ERR_BOUNDS;
    return MONOTONIC_RATE_WINDOW_SAFE_OK;
}
