#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(constant_time_ct_select_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    assert(ct_select_u64(999, 42, 7) == 42);
    assert(ct_select_u64(0, 42, 7) == 7);
    return 0;
}
