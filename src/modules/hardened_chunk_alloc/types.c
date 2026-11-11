/**
 * @file types.c
 * @brief Core types and configuration for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#ifndef HARDENED_CHUNK_ALLOC_TYPES_H
#define HARDENED_CHUNK_ALLOC_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define HARDENED_CHUNK_ALLOC_ALIGNMENT 64
#define HARDENED_CHUNK_ALLOC_DEFAULT_SZ 8192

typedef struct hardened_chunk_alloc_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} hardened_chunk_alloc_config_t;

typedef struct hardened_chunk_alloc_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    hardened_chunk_alloc_config_t config;
} hardened_chunk_alloc_state_t;

#endif /* HARDENED_CHUNK_ALLOC_TYPES_H */
