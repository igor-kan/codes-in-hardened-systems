/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Safe Memory Copy and Buffer Slicing with Bounds Check.
 * Module: bounds_checked_buffer | Algorithm Family: safe_copy
 */

#ifndef BOUNDS_CHECKED_BUFFER_TYPES_H
#define BOUNDS_CHECKED_BUFFER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define BOUNDS_CHECKED_BUFFER_ALIGNMENT 64
#define BOUNDS_CHECKED_BUFFER_CAPACITY 4096

typedef struct bounds_checked_buffer_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} bounds_checked_buffer_config_t;

typedef struct bounds_checked_buffer_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    bounds_checked_buffer_config_t config;
} bounds_checked_buffer_state_t;

#endif /* BOUNDS_CHECKED_BUFFER_TYPES_H */
