#include "interface.h"
#include <assert.h>

int main(void) {
    int64_t a[6] = {10, INT64_MAX, INT64_MIN, -100, (1LL << 40), -(1LL << 35)};
    int64_t b[6] = {20, 2,         -1,        50,   (1LL << 40), (1LL << 35)};
    int64_t out[6];
    uint8_t flags[6];
    assert(batch_checked_mul_mt(a, b, out, flags, 6, 3) == CHECKED_I64_MUL_DIV_OK);
    assert(flags[0] == 1 && out[0] == 200);
    assert(flags[1] == 0 && flags[2] == 0 && flags[4] == 0 && flags[5] == 0);
    assert(flags[3] == 1 && out[3] == -5000);
    for (int i = 0; i < 6; ++i) assert(verify_arith_invariants(a[i], b[i]) == CHECKED_I64_MUL_DIV_OK);
    return 0;
}
