#include "interface.h"

checked_i64_mul_div_err_t validate_div_pair(int64_t a, int64_t b) {
    if (b == 0) return CHECKED_I64_MUL_DIV_ERR_INVALID;
    if (a == INT64_MIN && b == -1) return CHECKED_I64_MUL_DIV_ERR_OVERFLOW;
    return CHECKED_I64_MUL_DIV_OK;
}
