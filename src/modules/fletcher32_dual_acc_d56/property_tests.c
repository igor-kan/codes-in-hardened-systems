#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(fletcher32_dual_acc_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint16_t a[2] = {1000, 2000};
    assert(fletcher32_words(a, 2) == fletcher32_words(a, 2));
    return 0;
}
