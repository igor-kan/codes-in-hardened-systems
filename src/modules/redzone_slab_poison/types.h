#ifndef REDZONE_SLAB_POISON_TYPES_H
#define REDZONE_SLAB_POISON_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define SLAB_REDZONE_BYTES 16U
#define SLAB_PAYLOAD_BYTES 64U
#define SLAB_STRIDE (SLAB_REDZONE_BYTES + SLAB_PAYLOAD_BYTES + SLAB_REDZONE_BYTES)
#define SLAB_NUM_SLOTS 32U
typedef struct {
    uint8_t backing[SLAB_NUM_SLOTS * SLAB_STRIDE];
    uint32_t alloc_mask;
    uint32_t corruption_count;
} hardened_slab_t;

#endif /* REDZONE_SLAB_POISON_TYPES_H */
