/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard | Algorithm Family: overflow_guard
 */

#ifndef INTEGER_OVERFLOW_GUARD_TYPES_H
#define INTEGER_OVERFLOW_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define INTEGER_OVERFLOW_GUARD_ALIGNMENT 64
#define INTEGER_OVERFLOW_GUARD_BASE_CAPACITY 1024

typedef struct integer_overflow_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} integer_overflow_guard_config_t;

typedef struct integer_overflow_guard_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    integer_overflow_guard_config_t config;
} integer_overflow_guard_state_t;

#endif /* INTEGER_OVERFLOW_GUARD_TYPES_H */
