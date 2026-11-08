/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for Deterministic Crash Replay and Delta-Debugger.
 * Module: minimized_crash_reproducer
 */

#ifndef MINIMIZED_CRASH_REPRODUCER_TYPES_H
#define MINIMIZED_CRASH_REPRODUCER_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MINIMIZED_CRASH_REPRODUCER_ALIGNMENT 64
#define MINIMIZED_CRASH_REPRODUCER_SUCCESS 0
#define MINIMIZED_CRASH_REPRODUCER_ERR_NULL_PTR -1
#define MINIMIZED_CRASH_REPRODUCER_ERR_INVALID_PARAM -2
#define MINIMIZED_CRASH_REPRODUCER_ERR_OUT_OF_BOUNDS -3

typedef struct minimized_crash_reproducer_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} minimized_crash_reproducer_config_t;

typedef struct minimized_crash_reproducer_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    minimized_crash_reproducer_config_t config;
} minimized_crash_reproducer_context_t;

int minimized_crash_reproducer_init(minimized_crash_reproducer_context_t* ctx, const minimized_crash_reproducer_config_t* cfg);
int minimized_crash_reproducer_destroy(minimized_crash_reproducer_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* MINIMIZED_CRASH_REPRODUCER_TYPES_H */
