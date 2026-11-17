#include "interface.h"

void qslab_init(qslab_t* s) {
    s->q_head = 0;
    s->q_tail = 0;
    s->q_count = 0;
    for (int32_t i = 0; i < QSLAB_SLOTS; ++i) {
        s->state[i] = 0;
        qslab_fast_poison(s->mem[i], 0x00U, QSLAB_BLK);
    }
}

slab_poison_quarantine_err_t qslab_alloc(qslab_t* s, int32_t* out_slot) {
    if (!s || !out_slot) return SLAB_POISON_QUARANTINE_ERR_NULL;
    for (int32_t i = 0; i < QSLAB_SLOTS; ++i) {
        if (s->state[i] == 0) {
            s->state[i] = 1;
            qslab_fast_poison(s->mem[i], 0xAAU, QSLAB_BLK);
            *out_slot = i;
            return SLAB_POISON_QUARANTINE_OK;
        }
    }
    if (s->q_count > 0) {
        int32_t reused = s->q_ring[s->q_head];
        s->q_head = (s->q_head + 1) % QSLAB_SLOTS;
        s->q_count--;
        for (size_t b = 0; b < QSLAB_BLK; ++b) {
            if (s->mem[reused][b] != QSLAB_POISON) return SLAB_POISON_QUARANTINE_ERR_INVARIANT;
        }
        s->state[reused] = 1;
        qslab_fast_poison(s->mem[reused], 0xAAU, QSLAB_BLK);
        *out_slot = reused;
        return SLAB_POISON_QUARANTINE_OK;
    }
    return SLAB_POISON_QUARANTINE_ERR_BOUNDS;
}

slab_poison_quarantine_err_t qslab_free(qslab_t* s, int32_t slot) {
    slab_poison_quarantine_err_t err = qslab_validate_slot(s, slot);
    if (err != SLAB_POISON_QUARANTINE_OK) return err;
    if (s->state[slot] != 1) return SLAB_POISON_QUARANTINE_ERR_INVALID;
    qslab_fast_poison(s->mem[slot], QSLAB_POISON, QSLAB_BLK);
    s->state[slot] = 2;
    s->q_ring[s->q_tail] = slot;
    s->q_tail = (s->q_tail + 1) % QSLAB_SLOTS;
    s->q_count++;
    return SLAB_POISON_QUARANTINE_OK;
}
