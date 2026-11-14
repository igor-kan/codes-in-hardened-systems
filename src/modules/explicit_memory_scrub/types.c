/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub | Algorithm Family: zeroize
 */

#ifndef EXPLICIT_MEMORY_SCRUB_TYPES_H
#define EXPLICIT_MEMORY_SCRUB_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define EXPLICIT_MEMORY_SCRUB_ALIGNMENT 64
#define EXPLICIT_MEMORY_SCRUB_CAPACITY 4096

typedef struct explicit_memory_scrub_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} explicit_memory_scrub_config_t;

typedef struct explicit_memory_scrub_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    explicit_memory_scrub_config_t config;
} explicit_memory_scrub_state_t;

#endif /* EXPLICIT_MEMORY_SCRUB_TYPES_H */
