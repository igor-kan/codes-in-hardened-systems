#ifndef SLAB_BITMAP_ALLOC_D57_TYPES_H
#define SLAB_BITMAP_ALLOC_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t used_mask;
} slab64_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} slab_bitmap_alloc_d57_meta_t;

#endif /* SLAB_BITMAP_ALLOC_D57_TYPES_H */
