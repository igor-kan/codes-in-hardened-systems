#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(safe_slice_bounds_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    assert(validate_slice_range(0, 0, 0) == 0);
    assert(validate_slice_range(10, 10, 0) == 0);
    return 0;
}
