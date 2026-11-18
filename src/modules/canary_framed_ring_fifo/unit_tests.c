#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(canary_framed_ring_fifo_validate_len(1) == CANARY_FRAMED_RING_FIFO_OK);
    canary_ring_t q; cring_init(&q);
    assert(cring_push(&q, 777ULL));
    uint64_t v = 0;
    assert(cring_pop(&q, &v) && v == 777ULL);
    assert(q.slots[0].payload == SLOT_POISON);
    assert(canary_framed_ring_fifo_verify_guard(true) == CANARY_FRAMED_RING_FIFO_OK);
    return 0;
}
