#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(canary_xor_ring_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    sealed_slot_t s = seal_slot(0ULL, 42ULL);
    uint64_t v = 99;
    assert(unseal_slot(s, 43ULL, &v) == -1);
    return 0;
}
