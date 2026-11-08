/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for Hardened Memory Allocator with Canary Protection.
 * Module: canary_guard_allocator
 */

#ifndef CANARY_GUARD_ALLOCATOR_TYPES_H
#define CANARY_GUARD_ALLOCATOR_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CANARY_GUARD_ALLOCATOR_ALIGNMENT 64
#define CANARY_GUARD_ALLOCATOR_SUCCESS 0
#define CANARY_GUARD_ALLOCATOR_ERR_NULL_PTR -1
#define CANARY_GUARD_ALLOCATOR_ERR_INVALID_PARAM -2
#define CANARY_GUARD_ALLOCATOR_ERR_OUT_OF_BOUNDS -3

typedef struct canary_guard_allocator_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} canary_guard_allocator_config_t;

typedef struct canary_guard_allocator_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    canary_guard_allocator_config_t config;
} canary_guard_allocator_context_t;

int canary_guard_allocator_init(canary_guard_allocator_context_t* ctx, const canary_guard_allocator_config_t* cfg);
int canary_guard_allocator_destroy(canary_guard_allocator_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* CANARY_GUARD_ALLOCATOR_TYPES_H */
