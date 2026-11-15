#include "interface.h"
#include <stdint.h>

void redzone_slab_poison_scrub_mem(void* p, size_t len, uint8_t byte_val) {
    volatile uint8_t* vp = (volatile uint8_t*)p;
    for (size_t i = 0; i < len; ++i) vp[i] = byte_val;
}

void redzone_slab_poison_init(hardened_slab_t* s) {
    if (!s) return;
    s->alloc_mask = 0;
    s->corruption_count = 0;
    redzone_slab_poison_scrub_mem(s->backing, sizeof(s->backing), 0xA5U);
}

void* redzone_slab_poison_alloc(hardened_slab_t* s) {
    if (!s) return NULL;
    for (size_t i = 0; i < SLAB_NUM_SLOTS; ++i) {
        if ((s->alloc_mask & (1U << i)) == 0) {
            s->alloc_mask |= (1U << i);
            uint8_t* slot = s->backing + i * SLAB_STRIDE;
            redzone_slab_poison_scrub_mem(slot, SLAB_REDZONE_BYTES, 0xFEU);
            redzone_slab_poison_scrub_mem(slot + SLAB_REDZONE_BYTES, SLAB_PAYLOAD_BYTES, 0x00U);
            redzone_slab_poison_scrub_mem(slot + SLAB_REDZONE_BYTES + SLAB_PAYLOAD_BYTES, SLAB_REDZONE_BYTES, 0xFEU);
            return slot + SLAB_REDZONE_BYTES;
        }
    }
    return NULL;
}

redzone_slab_poison_err_t redzone_slab_poison_free(hardened_slab_t* s, void* ptr) {
    if (!s || !ptr) return REDZONE_SLAB_POISON_ERR_NULL;
    uintptr_t base = (uintptr_t)s->backing;
    uintptr_t u = (uintptr_t)ptr;
    if (u < base + SLAB_REDZONE_BYTES) return REDZONE_SLAB_POISON_ERR_BOUNDS;
    size_t diff = (size_t)(u - (base + SLAB_REDZONE_BYTES));
    if (diff % SLAB_STRIDE != 0) return REDZONE_SLAB_POISON_ERR_INVALID;
    size_t idx = diff / SLAB_STRIDE;
    if (idx >= SLAB_NUM_SLOTS || ((s->alloc_mask & (1U << idx)) == 0)) return REDZONE_SLAB_POISON_ERR_INVALID; // Double free!
    if (redzone_slab_poison_check_slot(s, idx) != REDZONE_SLAB_POISON_OK) {
        s->corruption_count++;
        return REDZONE_SLAB_POISON_ERR_INVARIANT;
    }
    redzone_slab_poison_scrub_mem(s->backing + idx * SLAB_STRIDE, SLAB_STRIDE, 0xA5U);
    s->alloc_mask &= ~(1U << idx);
    return REDZONE_SLAB_POISON_OK;
}
