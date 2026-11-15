#include "interface.h"
size_t redzone_slab_poison_free_count(const hardened_slab_t* s) {
    if (!s) return 0;
    size_t free_slots = 0;
    for (size_t i = 0; i < SLAB_NUM_SLOTS; ++i) {
        if ((s->alloc_mask & (1U << i)) == 0) free_slots++;
    }
    return free_slots;
}
