#include "interface.h"

checked_fixedpoint_q16_err_t q16_validate_nonzero(q16_t denom) {
    if (denom == 0) return CHECKED_FIXEDPOINT_Q16_ERR_INVALID;
    return CHECKED_FIXEDPOINT_Q16_OK;
}
