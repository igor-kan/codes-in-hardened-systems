/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy | Algorithm Family: safe_string
 */

#ifndef SAFE_BOUNDED_STRING_COPY_TYPES_H
#define SAFE_BOUNDED_STRING_COPY_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SAFE_BOUNDED_STRING_COPY_ALIGNMENT 64
#define SAFE_BOUNDED_STRING_COPY_BASE_CAPACITY 1024

typedef struct safe_bounded_string_copy_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} safe_bounded_string_copy_config_t;

typedef struct safe_bounded_string_copy_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    safe_bounded_string_copy_config_t config;
} safe_bounded_string_copy_state_t;

#endif /* SAFE_BOUNDED_STRING_COPY_TYPES_H */
