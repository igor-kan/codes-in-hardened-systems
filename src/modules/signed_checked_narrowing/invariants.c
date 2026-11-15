#include "interface.h"
signed_checked_narrowing_err_t signed_checked_narrowing_verify_bounds(int64_t val) {
    int32_t narrowed = 0;
    if (signed_checked_narrowing_i64_to_i32(val, &narrowed) == SIGNED_CHECKED_NARROWING_OK) {
        return ((int64_t)narrowed == val) ? SIGNED_CHECKED_NARROWING_OK : SIGNED_CHECKED_NARROWING_ERR_INVARIANT;
    }
    return SIGNED_CHECKED_NARROWING_OK;
}
