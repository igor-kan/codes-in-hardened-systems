#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(checked_mul_add_i64_c_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    int64_t r = 0; assert(checked_mul_i64(-10, 25, &r) && r == -250);
    return 0;
}
