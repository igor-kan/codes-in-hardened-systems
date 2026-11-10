/**
 * @file types.c
 * @brief Core types and configuration for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#ifndef HARDENED_ARENA_ALLOCATOR_TYPES_H
#define HARDENED_ARENA_ALLOCATOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define HARDENED_ARENA_ALLOCATOR_ALIGNMENT 64
#define HARDENED_ARENA_ALLOCATOR_CAPACITY 4096

typedef struct hardened_arena_allocator_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} hardened_arena_allocator_config_t;

typedef struct hardened_arena_allocator_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    hardened_arena_allocator_config_t config;
} hardened_arena_allocator_state_t;

#endif /* HARDENED_ARENA_ALLOCATOR_TYPES_H */
