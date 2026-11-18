#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(canary_framed_ring_fifo_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    canary_ring_t q; cring_init(&q);
    cring_push(&q, 123ULL);
    q.slots[0].tail_canary ^= 1U;
    uint64_t v = 0;
    assert(!cring_pop(&q, &v));
    return 0;
}
