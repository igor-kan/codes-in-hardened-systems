#ifndef SLAB_BITMAP_ALLOC_D57_INTERFACE_H
#define SLAB_BITMAP_ALLOC_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

void slab64_init(slab64_t *s);
int slab64_alloc(slab64_t *s);
int slab64_free(slab64_t *s, int slot);

slab_bitmap_alloc_d57_err_t slab_bitmap_alloc_d57_validate_len(size_t n);
uint64_t slab_bitmap_alloc_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t slab_bitmap_alloc_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
slab_bitmap_alloc_d57_err_t slab_bitmap_alloc_d57_verify_guard(bool cond);

#endif /* SLAB_BITMAP_ALLOC_D57_INTERFACE_H */
