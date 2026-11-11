/**
 * @file types.c
 * @brief Core types and configuration for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#ifndef MINIMIZED_CRASH_TRIAGER_TYPES_H
#define MINIMIZED_CRASH_TRIAGER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MINIMIZED_CRASH_TRIAGER_ALIGNMENT 64
#define MINIMIZED_CRASH_TRIAGER_DEFAULT_SZ 8192

typedef struct minimized_crash_triager_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} minimized_crash_triager_config_t;

typedef struct minimized_crash_triager_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    minimized_crash_triager_config_t config;
} minimized_crash_triager_state_t;

#endif /* MINIMIZED_CRASH_TRIAGER_TYPES_H */
