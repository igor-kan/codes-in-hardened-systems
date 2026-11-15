#include "interface.h"
redzone_slab_poison_err_t redzone_slab_poison_audit_all(const hardened_slab_t* s) {
    if (!s) return REDZONE_SLAB_POISON_ERR_NULL;
    for (size_t i = 0; i < SLAB_NUM_SLOTS; ++i) {
        if (s->alloc_mask & (1U << i)) {
            if (redzone_slab_poison_check_slot(s, i) != REDZONE_SLAB_POISON_OK) return REDZONE_SLAB_POISON_ERR_INVARIANT;
        }
    }
    return REDZONE_SLAB_POISON_OK;
}
