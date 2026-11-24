#ifndef CANARY_XOR_RING_D59_TYPES_H
#define CANARY_XOR_RING_D59_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t val;
    uint64_t tag;
} sealed_slot_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} canary_xor_ring_d59_meta_t;

#endif /* CANARY_XOR_RING_D59_TYPES_H */
