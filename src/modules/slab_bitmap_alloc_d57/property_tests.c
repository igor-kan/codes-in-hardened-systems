#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(slab_bitmap_alloc_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    slab64_t sb; slab64_init(&sb);
    for (int i = 0; i < 64; ++i) assert(slab64_alloc(&sb) == i);
    assert(slab64_alloc(&sb) == -1);
    return 0;
}
