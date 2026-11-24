#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(double_fence_pool_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    gen_pool_t gp; gp_init(&gp);
    gen_handle_t h = {99, 1};
    assert(gp_valid(&gp, h) == 0);
    return 0;
}
