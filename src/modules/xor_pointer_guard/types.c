/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard | Algorithm Family: xor_cookie
 */

#ifndef XOR_POINTER_GUARD_TYPES_H
#define XOR_POINTER_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define XOR_POINTER_GUARD_ALIGNMENT 64
#define XOR_POINTER_GUARD_BASE_CAPACITY 1024

typedef struct xor_pointer_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} xor_pointer_guard_config_t;

typedef struct xor_pointer_guard_state {
    void* buffer;
    size_t count;
    uint64_t operations;
    double accumulator;
    xor_pointer_guard_config_t config;
} xor_pointer_guard_state_t;

#endif /* XOR_POINTER_GUARD_TYPES_H */
