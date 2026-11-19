#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(constant_time_memeq_c11_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t a[4] = {0}, b[4] = {0,0,0,1}; assert(!ct_mem_equal(a, b, 4));
    return 0;
}
