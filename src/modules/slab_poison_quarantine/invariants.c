#include "interface.h"

slab_poison_quarantine_err_t qslab_verify_poisoned(const qslab_t* s) {
    if (!s) return SLAB_POISON_QUARANTINE_ERR_NULL;
    for (size_t i = 0; i < QSLAB_SLOTS; ++i) {
        if (s->state[i] == 2) {
            for (size_t b = 0; b < QSLAB_BLK; ++b) {
                if (s->mem[i][b] != QSLAB_POISON) return SLAB_POISON_QUARANTINE_ERR_INVARIANT;
            }
        }
    }
    return SLAB_POISON_QUARANTINE_OK;
}
