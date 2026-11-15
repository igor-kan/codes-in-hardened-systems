#include "interface.h"
redzone_slab_poison_err_t redzone_slab_poison_check_slot(const hardened_slab_t* s, size_t idx) {
    if (!s || idx >= SLAB_NUM_SLOTS) return REDZONE_SLAB_POISON_ERR_BOUNDS;
    const uint8_t* slot = s->backing + idx * SLAB_STRIDE;
    for (size_t i = 0; i < SLAB_REDZONE_BYTES; ++i) {
        if (slot[i] != 0xFEU || slot[SLAB_REDZONE_BYTES + SLAB_PAYLOAD_BYTES + i] != 0xFEU) {
            return REDZONE_SLAB_POISON_ERR_INVARIANT;
        }
    }
    return REDZONE_SLAB_POISON_OK;
}
