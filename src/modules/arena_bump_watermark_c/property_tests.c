#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(arena_bump_watermark_c_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    safe_arena_t a; sarena_init(&a); a.tail_canary ^= 1ULL; assert(!sarena_audit(&a));
    return 0;
}
