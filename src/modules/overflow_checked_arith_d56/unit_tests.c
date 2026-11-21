#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(overflow_checked_arith_d56_validate_len(1) == OVERFLOW_CHECKED_ARITH_D56_OK);
    uint64_t res = 0;
    assert(safe_add_u64(10, 20, &res) == 0 && res == 30);
    assert(safe_add_u64(UINT64_MAX, 1, &res) == -1);
    assert(safe_mul_u64(UINT64_MAX / 2 + 10, 3, &res) == -1);
    assert(sat_add_u64(UINT64_MAX - 5, 100) == UINT64_MAX);
    assert(overflow_checked_arith_d56_verify_guard(true) == OVERFLOW_CHECKED_ARITH_D56_OK);
    return 0;
}
