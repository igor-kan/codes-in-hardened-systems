/**
 * @file types.c
 * @brief Core types and configuration for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#ifndef MEMORY_GUARD_PAGES_TYPES_H
#define MEMORY_GUARD_PAGES_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MEMORY_GUARD_PAGES_ALIGNMENT 64
#define MEMORY_GUARD_PAGES_CAPACITY 2048

typedef struct memory_guard_pages_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} memory_guard_pages_config_t;

typedef struct memory_guard_pages_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    memory_guard_pages_config_t config;
} memory_guard_pages_state_t;

#endif /* MEMORY_GUARD_PAGES_TYPES_H */
