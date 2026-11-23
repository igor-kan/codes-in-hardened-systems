#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(checked_div_mod_d58_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    int64_t q = 0, r = 0;
    assert(safe_div_i64(INT64_MIN, 2, &q, &r) == 0 && q * 2 + r == INT64_MIN);
    return 0;
}
