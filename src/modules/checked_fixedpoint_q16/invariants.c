#include "interface.h"
#include <limits.h>

checked_fixedpoint_q16_err_t q16_verify_identities(void) {
    q16_t out = 0;
    if (q16_add_checked(INT32_MAX, 1, &out) != CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW) return CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT;
    if (q16_div_checked(1 << 16, 0, &out) != CHECKED_FIXEDPOINT_Q16_ERR_INVALID) return CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT;
    if (q16_mul_checked(3 << 16, 4 << 16, &out) != CHECKED_FIXEDPOINT_Q16_OK || out != (12 << 16)) {
        return CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT;
    }
    if (q16_saturating_add(INT32_MAX, 50) != INT32_MAX) return CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT;
    return CHECKED_FIXEDPOINT_Q16_OK;
}
