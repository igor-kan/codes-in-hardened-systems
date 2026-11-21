#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(overflow_checked_arith_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint64_t r = 0;
    assert(safe_mul_u64(0ULL, UINT64_MAX, &r) == 0 && r == 0ULL);
    return 0;
}
