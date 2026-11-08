/**
 * @file types.c
 * @brief Core types and configuration for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#ifndef STACK_CANARY_GUARD_TYPES_H
#define STACK_CANARY_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define STACK_CANARY_GUARD_ALIGNMENT 64
#define STACK_CANARY_GUARD_DEFAULT_CAPACITY 1024

typedef struct stack_canary_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} stack_canary_guard_config_t;

typedef struct stack_canary_guard_state {
    void* memory_arena;
    size_t count;
    uint64_t metric_cycles;
    stack_canary_guard_config_t config;
} stack_canary_guard_state_t;

#endif /* STACK_CANARY_GUARD_TYPES_H */
