/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare | Algorithm Family: constant_time
 */

#ifndef CONSTANT_TIME_COMPARE_TYPES_H
#define CONSTANT_TIME_COMPARE_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CONSTANT_TIME_COMPARE_ALIGNMENT 64
#define CONSTANT_TIME_COMPARE_BASE_CAPACITY 1024

typedef struct constant_time_compare_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} constant_time_compare_config_t;

typedef struct constant_time_compare_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    constant_time_compare_config_t config;
} constant_time_compare_state_t;

#endif /* CONSTANT_TIME_COMPARE_TYPES_H */
