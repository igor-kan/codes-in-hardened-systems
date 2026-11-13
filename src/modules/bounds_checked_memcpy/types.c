/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Overlap-Aware Bounds-Checked Memory Copy with Abort.
 * Module: bounds_checked_memcpy | Algorithm Family: safe_copy
 */

#ifndef BOUNDS_CHECKED_MEMCPY_TYPES_H
#define BOUNDS_CHECKED_MEMCPY_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define BOUNDS_CHECKED_MEMCPY_ALIGNMENT 64
#define BOUNDS_CHECKED_MEMCPY_CAPACITY 2048

typedef struct bounds_checked_memcpy_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} bounds_checked_memcpy_config_t;

typedef struct bounds_checked_memcpy_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    bounds_checked_memcpy_config_t config;
} bounds_checked_memcpy_state_t;

#endif /* BOUNDS_CHECKED_MEMCPY_TYPES_H */
