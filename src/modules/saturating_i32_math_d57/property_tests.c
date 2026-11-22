#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(saturating_i32_math_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    assert(sat_add_i32(100, -40) == 60);
    assert(sat_sub_i32(25, -25) == 50);
    return 0;
}
