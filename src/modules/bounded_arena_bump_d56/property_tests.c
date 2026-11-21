#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(bounded_arena_bump_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t raw[32];
    bump_arena_t ar;
    bump_init(&ar, raw, 32);
    assert(bump_alloc(&ar, 4, 3) == NULL);
    assert(bump_alloc(&ar, 8, 8) != NULL);
    return 0;
}
