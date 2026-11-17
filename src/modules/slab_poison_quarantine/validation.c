#include "interface.h"

slab_poison_quarantine_err_t qslab_validate_slot(const qslab_t* s, int32_t slot) {
    if (!s) return SLAB_POISON_QUARANTINE_ERR_NULL;
    if (slot < 0 || slot >= QSLAB_SLOTS) return SLAB_POISON_QUARANTINE_ERR_BOUNDS;
    return SLAB_POISON_QUARANTINE_OK;
}
