/**
 * @file types.c
 * @brief Core types and configuration for Software Shadow Stack Return Address Guard.
 * Module: shadow_stack_guard
 */

#ifndef SHADOW_STACK_GUARD_TYPES_H
#define SHADOW_STACK_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SHADOW_STACK_GUARD_ALIGNMENT 64
#define SHADOW_STACK_GUARD_CAPACITY 2048

typedef struct shadow_stack_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} shadow_stack_guard_config_t;

typedef struct shadow_stack_guard_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    shadow_stack_guard_config_t config;
} shadow_stack_guard_state_t;

#endif /* SHADOW_STACK_GUARD_TYPES_H */
