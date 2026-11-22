#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(seqlock_version_guard_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    seqlock_pair_t sl = {0ULL, 0ULL, 0ULL};
    seqlock_write(&sl, 42ULL, 84ULL);
    uint64_t x = 0, y = 0;
    assert(seqlock_try_read(&sl, &x, &y) == 0 && y == x * 2ULL);
    return 0;
}
