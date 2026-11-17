#ifndef SLAB_POISON_QUARANTINE_INTERFACE_H
#define SLAB_POISON_QUARANTINE_INTERFACE_H

#include "types.h"
#include "errors.h"

void qslab_init(qslab_t* s);
slab_poison_quarantine_err_t qslab_alloc(qslab_t* s, int32_t* out_slot);
slab_poison_quarantine_err_t qslab_free(qslab_t* s, int32_t slot);
slab_poison_quarantine_err_t qslab_validate_slot(const qslab_t* s, int32_t slot);
void qslab_fast_poison(uint8_t* blk, uint8_t byte, size_t n);
size_t qslab_parallel_audit(const qslab_t* s, size_t lo, size_t hi);
slab_poison_quarantine_err_t qslab_verify_poisoned(const qslab_t* s);

#endif /* SLAB_POISON_QUARANTINE_INTERFACE_H */
