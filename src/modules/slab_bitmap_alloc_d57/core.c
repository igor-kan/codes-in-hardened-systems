#include "interface.h"
#include <math.h>
#include <string.h>

void slab64_init(slab64_t *s) { s->used_mask = 0ULL; }

int slab64_alloc(slab64_t *s) {
    uint64_t free_mask = ~s->used_mask;
    if (free_mask == 0ULL) return -1;
    int idx = 0;
    while (((free_mask >> idx) & 1ULL) == 0ULL) ++idx;
    s->used_mask |= (1ULL << idx);
    return idx;
}

int slab64_free(slab64_t *s, int slot) {
    if (slot < 0 || slot >= 64) return -1;
    uint64_t bit = 1ULL << slot;
    if ((s->used_mask & bit) == 0ULL) return -1;
    s->used_mask &= ~bit;
    return 0;
}
