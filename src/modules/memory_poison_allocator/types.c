/**
 * @file types.c
 * @brief Core types and configuration for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#ifndef MEMORY_POISON_ALLOCATOR_TYPES_H
#define MEMORY_POISON_ALLOCATOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MEMORY_POISON_ALLOCATOR_ALIGNMENT 64
#define MEMORY_POISON_ALLOCATOR_DEFAULT_CAPACITY 1024

typedef struct memory_poison_allocator_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} memory_poison_allocator_config_t;

typedef struct memory_poison_allocator_state {
    void* memory_arena;
    size_t count;
    uint64_t metric_cycles;
    memory_poison_allocator_config_t config;
} memory_poison_allocator_state_t;

#endif /* MEMORY_POISON_ALLOCATOR_TYPES_H */
