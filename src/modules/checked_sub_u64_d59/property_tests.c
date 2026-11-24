#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(checked_sub_u64_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint64_t r = 0;
    assert(safe_sub_u64(5ULL, 5ULL, &r) == 0 && r == 0ULL);
    return 0;
}
