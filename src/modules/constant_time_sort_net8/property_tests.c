#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(constant_time_sort_net8_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    int64_t a[8] = {5, -3, 12, 0, -9, 7, 1, 5};
    ct_sort_net8(a);
    for (int i = 1; i < 8; ++i) assert(a[i - 1] <= a[i]);
    return 0;
}
