/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor | Algorithm Family: freelist_xor
 */

#ifndef SECURE_FREELIST_XOR_TYPES_H
#define SECURE_FREELIST_XOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SECURE_FREELIST_XOR_ALIGNMENT 64
#define SECURE_FREELIST_XOR_CAPACITY 2048

typedef struct secure_freelist_xor_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} secure_freelist_xor_config_t;

typedef struct secure_freelist_xor_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    secure_freelist_xor_config_t config;
} secure_freelist_xor_state_t;

#endif /* SECURE_FREELIST_XOR_TYPES_H */
