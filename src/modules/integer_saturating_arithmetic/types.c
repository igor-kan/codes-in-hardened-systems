/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic | Algorithm Family: overflow_guard
 */

#ifndef INTEGER_SATURATING_ARITHMETIC_TYPES_H
#define INTEGER_SATURATING_ARITHMETIC_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define INTEGER_SATURATING_ARITHMETIC_ALIGNMENT 64
#define INTEGER_SATURATING_ARITHMETIC_CAPACITY 4096

typedef struct integer_saturating_arithmetic_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} integer_saturating_arithmetic_config_t;

typedef struct integer_saturating_arithmetic_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    integer_saturating_arithmetic_config_t config;
} integer_saturating_arithmetic_state_t;

#endif /* INTEGER_SATURATING_ARITHMETIC_TYPES_H */
