#include "interface.h"
#include <assert.h>

int main(void) {
    int32_t out32 = 0;
    assert(signed_checked_narrowing_i64_to_i32(INT32_MAX, &out32) == SIGNED_CHECKED_NARROWING_OK && out32 == INT32_MAX);
    assert(signed_checked_narrowing_i64_to_i32((int64_t)INT32_MAX + 1LL, &out32) == SIGNED_CHECKED_NARROWING_ERR_OVERFLOW);

    size_t sz = 0;
    assert(signed_checked_narrowing_i64_to_size(-1, &sz) == SIGNED_CHECKED_NARROWING_ERR_OVERFLOW);
    assert(signed_checked_narrowing_mul_size(SIZE_MAX / 2 + 1, 2, &sz) == SIGNED_CHECKED_NARROWING_ERR_OVERFLOW);

    int64_t sum = 0;
    assert(signed_checked_narrowing_add_i64(INT64_MAX, 1, &sum) == SIGNED_CHECKED_NARROWING_ERR_OVERFLOW);
    assert(signed_checked_narrowing_add_i64(INT64_MIN, -1, &sum) == SIGNED_CHECKED_NARROWING_ERR_OVERFLOW);
    assert(signed_checked_narrowing_align_up(17, 16, &sz) == SIGNED_CHECKED_NARROWING_OK && sz == 32);
    return 0;
}
