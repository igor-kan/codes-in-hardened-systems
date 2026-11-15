#ifndef REDZONE_SLAB_POISON_INTERFACE_H
#define REDZONE_SLAB_POISON_INTERFACE_H

#include "types.h"
#include "errors.h"

void redzone_slab_poison_init(hardened_slab_t* s);
void* redzone_slab_poison_alloc(hardened_slab_t* s);
redzone_slab_poison_err_t redzone_slab_poison_free(hardened_slab_t* s, void* ptr);
redzone_slab_poison_err_t redzone_slab_poison_check_slot(const hardened_slab_t* s, size_t idx);
void redzone_slab_poison_scrub_mem(void* p, size_t len, uint8_t byte_val);
redzone_slab_poison_err_t redzone_slab_poison_audit_all(const hardened_slab_t* s);

#endif /* REDZONE_SLAB_POISON_INTERFACE_H */
