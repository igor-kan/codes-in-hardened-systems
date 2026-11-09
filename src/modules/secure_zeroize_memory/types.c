/**
 * @file types.c
 * @brief Core types and configuration for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#ifndef SECURE_ZEROIZE_MEMORY_TYPES_H
#define SECURE_ZEROIZE_MEMORY_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SECURE_ZEROIZE_MEMORY_ALIGNMENT 64
#define SECURE_ZEROIZE_MEMORY_CAPACITY 2048

typedef struct secure_zeroize_memory_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} secure_zeroize_memory_config_t;

typedef struct secure_zeroize_memory_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    secure_zeroize_memory_config_t config;
} secure_zeroize_memory_state_t;

#endif /* SECURE_ZEROIZE_MEMORY_TYPES_H */
