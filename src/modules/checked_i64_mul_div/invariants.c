#include "interface.h"

checked_i64_mul_div_err_t verify_arith_invariants(int64_t a, int64_t b) {
    int64_t m = safe_midpoint_i64(a, b);
    int64_t lo = (a < b) ? a : b;
    int64_t hi = (a > b) ? a : b;
    if (m < lo || m > hi) return CHECKED_I64_MUL_DIV_ERR_INVARIANT;
    if (safe_midpoint_i64(b, a) != m) return CHECKED_I64_MUL_DIV_ERR_INVARIANT;
    return CHECKED_I64_MUL_DIV_OK;
}
