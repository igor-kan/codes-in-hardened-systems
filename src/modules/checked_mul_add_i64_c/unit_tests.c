#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(checked_mul_add_i64_c_validate_len(1) == CHECKED_MUL_ADD_I64_C_OK);
    int64_t r = 0;
    assert(checked_add_i64(100, 200, &r) && r == 300);
    assert(!checked_add_i64(INT64_MAX, 1, &r));
    assert(!checked_mul_i64(1LL << 40, 1LL << 30, &r));
    assert(saturating_add_i64(INT64_MAX, 50) == INT64_MAX);
    assert(saturating_add_i64(INT64_MIN, -50) == INT64_MIN);
    assert(checked_mul_add_i64_c_verify_guard(true) == CHECKED_MUL_ADD_I64_C_OK);
    return 0;
}
