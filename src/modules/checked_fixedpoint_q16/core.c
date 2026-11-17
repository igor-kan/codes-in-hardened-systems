#include "interface.h"
#include <limits.h>

checked_fixedpoint_q16_err_t q16_add_checked(q16_t a, q16_t b, q16_t* out) {
    if (!out) return CHECKED_FIXEDPOINT_Q16_ERR_NULL;
    int64_t s = (int64_t)a + (int64_t)b;
    if (s < INT32_MIN || s > INT32_MAX) return CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW;
    *out = (q16_t)s;
    return CHECKED_FIXEDPOINT_Q16_OK;
}

checked_fixedpoint_q16_err_t q16_mul_checked(q16_t a, q16_t b, q16_t* out) {
    if (!out) return CHECKED_FIXEDPOINT_Q16_ERR_NULL;
    int64_t prod = (int64_t)a * (int64_t)b;
    int64_t scaled = (prod >= 0) ? (prod / Q16_ONE) : -((-prod) / Q16_ONE);
    if (scaled < INT32_MIN || scaled > INT32_MAX) return CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW;
    *out = (q16_t)scaled;
    return CHECKED_FIXEDPOINT_Q16_OK;
}

checked_fixedpoint_q16_err_t q16_div_checked(q16_t a, q16_t b, q16_t* out) {
    if (!out) return CHECKED_FIXEDPOINT_Q16_ERR_NULL;
    if (b == 0) return CHECKED_FIXEDPOINT_Q16_ERR_INVALID;
    int64_t num = (int64_t)a * Q16_ONE;
    int64_t q = num / (int64_t)b;
    if (q < INT32_MIN || q > INT32_MAX) return CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW;
    *out = (q16_t)q;
    return CHECKED_FIXEDPOINT_Q16_OK;
}
