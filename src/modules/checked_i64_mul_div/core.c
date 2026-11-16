#include "interface.h"

checked_i64_mul_div_err_t checked_mul_i64(int64_t a, int64_t b, int64_t* out) {
    if (!out) return CHECKED_I64_MUL_DIV_ERR_NULL;
    if (a == 0 || b == 0) { *out = 0; return CHECKED_I64_MUL_DIV_OK; }
    if (a > 0) {
        if (b > 0) {
            if (a > INT64_MAX / b) return CHECKED_I64_MUL_DIV_ERR_OVERFLOW;
        } else {
            if (b < INT64_MIN / a) return CHECKED_I64_MUL_DIV_ERR_OVERFLOW;
        }
    } else {
        if (b > 0) {
            if (a < INT64_MIN / b) return CHECKED_I64_MUL_DIV_ERR_OVERFLOW;
        } else {
            if (a != 0 && b < INT64_MAX / a) return CHECKED_I64_MUL_DIV_ERR_OVERFLOW;
        }
    }
    *out = a * b;
    return CHECKED_I64_MUL_DIV_OK;
}

checked_i64_mul_div_err_t checked_div_i64(int64_t a, int64_t b, int64_t* out) {
    if (!out) return CHECKED_I64_MUL_DIV_ERR_NULL;
    checked_i64_mul_div_err_t v = validate_div_pair(a, b);
    if (v != CHECKED_I64_MUL_DIV_OK) return v;
    *out = a / b;
    return CHECKED_I64_MUL_DIV_OK;
}

int64_t safe_midpoint_i64(int64_t a, int64_t b) {
    uint64_t ua = (uint64_t)a;
    uint64_t ub = (uint64_t)b;
    int64_t lo = (a < b) ? a : b;
    uint64_t hi_u = (a < b) ? ub : ua;
    uint64_t lo_u = (a < b) ? ua : ub;
    uint64_t diff = hi_u - lo_u;
    return (int64_t)((uint64_t)lo + (diff >> 1U));
}
