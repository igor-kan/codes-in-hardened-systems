#include "interface.h"
#include <math.h>
#include <string.h>

void cring_init(canary_ring_t* q) {
    q->head = 0; q->tail = 0; q->count = 0;
    for (size_t i = 0; i < CRING_CAP; ++i) {
        q->slots[i] = (canary_slot_t){CANARY_HEAD, SLOT_POISON, CANARY_TAIL};
    }
}
bool cring_push(canary_ring_t* q, uint64_t v) {
    if (q->count == CRING_CAP) return false;
    q->slots[q->tail] = (canary_slot_t){CANARY_HEAD, v, CANARY_TAIL};
    q->tail = (q->tail + 1) % CRING_CAP;
    q->count += 1;
    return true;
}
bool cring_pop(canary_ring_t* q, uint64_t* out) {
    if (q->count == 0) return false;
    canary_slot_t s = q->slots[q->head];
    if (s.head_canary != CANARY_HEAD || s.tail_canary != CANARY_TAIL) return false;
    *out = s.payload;
    q->slots[q->head].payload = SLOT_POISON;
    q->head = (q->head + 1) % CRING_CAP;
    q->count -= 1;
    return true;
}
