#include "interface.h"
#include <assert.h>

int main(void) {
    int64_t out = 0;
    assert(checked_mul_i64(INT64_MAX, 2, &out) == CHECKED_I64_MUL_DIV_ERR_OVERFLOW);
    assert(checked_mul_i64(INT64_MIN, -1, &out) == CHECKED_I64_MUL_DIV_ERR_OVERFLOW);
    assert(checked_mul_i64(1000000LL, 2000000LL, &out) == CHECKED_I64_MUL_DIV_OK && out == 2000000000000LL);
    assert(checked_div_i64(INT64_MIN, -1, &out) == CHECKED_I64_MUL_DIV_ERR_OVERFLOW);
    assert(checked_div_i64(42, 0, &out) == CHECKED_I64_MUL_DIV_ERR_INVALID);
    assert(safe_midpoint_i64(INT64_MAX, INT64_MAX) == INT64_MAX);
    assert(safe_midpoint_i64(INT64_MIN, INT64_MAX) == -1);
    assert(verify_arith_invariants(INT64_MIN, INT64_MAX) == CHECKED_I64_MUL_DIV_OK);
    return 0;
}
