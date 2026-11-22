#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(var_u64_bounds_chk_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    size_t t = 0;
    assert(safe_array_bytes(64, SIZE_MAX, 0, &t) == 0 && t == 64);
    return 0;
}
