/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel | Algorithm Family: canary_guard
 */

#ifndef CANARY_STACK_SENTINEL_TYPES_H
#define CANARY_STACK_SENTINEL_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CANARY_STACK_SENTINEL_ALIGNMENT 64
#define CANARY_STACK_SENTINEL_BASE_CAPACITY 1024

typedef struct canary_stack_sentinel_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} canary_stack_sentinel_config_t;

typedef struct canary_stack_sentinel_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    canary_stack_sentinel_config_t config;
} canary_stack_sentinel_state_t;

#endif /* CANARY_STACK_SENTINEL_TYPES_H */
