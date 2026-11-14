/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select | Algorithm Family: constant_time
 */

#ifndef CONSTANT_TIME_SELECT_TYPES_H
#define CONSTANT_TIME_SELECT_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CONSTANT_TIME_SELECT_ALIGNMENT 64
#define CONSTANT_TIME_SELECT_CAPACITY 4096

typedef struct constant_time_select_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} constant_time_select_config_t;

typedef struct constant_time_select_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    constant_time_select_config_t config;
} constant_time_select_state_t;

#endif /* CONSTANT_TIME_SELECT_TYPES_H */
