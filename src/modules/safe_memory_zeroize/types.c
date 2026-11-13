/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize | Algorithm Family: zeroize
 */

#ifndef SAFE_MEMORY_ZEROIZE_TYPES_H
#define SAFE_MEMORY_ZEROIZE_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SAFE_MEMORY_ZEROIZE_ALIGNMENT 64
#define SAFE_MEMORY_ZEROIZE_CAPACITY 2048

typedef struct safe_memory_zeroize_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} safe_memory_zeroize_config_t;

typedef struct safe_memory_zeroize_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    safe_memory_zeroize_config_t config;
} safe_memory_zeroize_state_t;

#endif /* SAFE_MEMORY_ZEROIZE_TYPES_H */
