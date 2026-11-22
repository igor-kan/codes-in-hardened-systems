#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(saturating_i32_math_d57_validate_len(1) == SATURATING_I32_MATH_D57_OK);
    assert(sat_add_i32(INT32_MAX, 50) == INT32_MAX);
    assert(sat_sub_i32(INT32_MIN, 10) == INT32_MIN);
    assert(sat_neg_i32(INT32_MIN) == INT32_MAX);
    assert(saturating_i32_math_d57_verify_guard(true) == SATURATING_I32_MATH_D57_OK);
    return 0;
}
