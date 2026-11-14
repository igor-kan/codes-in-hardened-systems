/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel | Algorithm Family: stack_canary
 */

#ifndef STACK_COOKIE_SENTINEL_TYPES_H
#define STACK_COOKIE_SENTINEL_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define STACK_COOKIE_SENTINEL_ALIGNMENT 64
#define STACK_COOKIE_SENTINEL_CAPACITY 4096

typedef struct stack_cookie_sentinel_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} stack_cookie_sentinel_config_t;

typedef struct stack_cookie_sentinel_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    stack_cookie_sentinel_config_t config;
} stack_cookie_sentinel_state_t;

#endif /* STACK_COOKIE_SENTINEL_TYPES_H */
