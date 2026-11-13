/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened | Algorithm Family: stack_canary
 */

#ifndef STACK_CANARY_GUARD_HARDENED_TYPES_H
#define STACK_CANARY_GUARD_HARDENED_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define STACK_CANARY_GUARD_HARDENED_ALIGNMENT 64
#define STACK_CANARY_GUARD_HARDENED_CAPACITY 2048

typedef struct stack_canary_guard_hardened_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} stack_canary_guard_hardened_config_t;

typedef struct stack_canary_guard_hardened_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    stack_canary_guard_hardened_config_t config;
} stack_canary_guard_hardened_state_t;

#endif /* STACK_CANARY_GUARD_HARDENED_TYPES_H */
