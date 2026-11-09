/**
 * @file types.c
 * @brief Core types and configuration for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#ifndef HARDENED_FREELIST_ALLOC_TYPES_H
#define HARDENED_FREELIST_ALLOC_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define HARDENED_FREELIST_ALLOC_ALIGNMENT 64
#define HARDENED_FREELIST_ALLOC_CAPACITY 2048

typedef struct hardened_freelist_alloc_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} hardened_freelist_alloc_config_t;

typedef struct hardened_freelist_alloc_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    hardened_freelist_alloc_config_t config;
} hardened_freelist_alloc_state_t;

#endif /* HARDENED_FREELIST_ALLOC_TYPES_H */
