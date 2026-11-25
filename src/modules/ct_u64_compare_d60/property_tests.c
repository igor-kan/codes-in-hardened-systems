#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(ct_u64_compare_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t a[16], b[16];
    for (size_t i = 0; i < 16; ++i) { a[i] = (uint8_t)i; b[i] = (uint8_t)i; }
    assert(ct_memeq_d60(a, b, 16) == 1U);
    b[0] ^= 0x80U;
    assert(ct_memeq_d60(a, b, 16) == 0U);
    assert(ct_select_u64_d60(0U, 11ULL, 22ULL) == 22ULL);
    return 0;
}
