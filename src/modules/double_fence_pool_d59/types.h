#ifndef DOUBLE_FENCE_POOL_D59_TYPES_H
#define DOUBLE_FENCE_POOL_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint16_t slot;
    uint16_t gen;
} gen_handle_t;

typedef struct {
    uint16_t gens[16];
    uint8_t used[16];
} gen_pool_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} double_fence_pool_d59_meta_t;

#endif /* DOUBLE_FENCE_POOL_D59_TYPES_H */
