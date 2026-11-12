/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit | Algorithm Family: zeroize
 */

#ifndef MEMORY_WIPE_EXPLICIT_TYPES_H
#define MEMORY_WIPE_EXPLICIT_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MEMORY_WIPE_EXPLICIT_ALIGNMENT 64
#define MEMORY_WIPE_EXPLICIT_BASE_CAPACITY 1024

typedef struct memory_wipe_explicit_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} memory_wipe_explicit_config_t;

typedef struct memory_wipe_explicit_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    memory_wipe_explicit_config_t config;
} memory_wipe_explicit_state_t;

#endif /* MEMORY_WIPE_EXPLICIT_TYPES_H */
