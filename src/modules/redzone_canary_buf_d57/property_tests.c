#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(redzone_canary_buf_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    rz_buf32_t b; rz32_init(&b);
    b.head_guard = 0;
    assert(rz32_check(&b) == -1);
    return 0;
}
