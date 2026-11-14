/**
 * @file types.c
 * @brief Domain types, memory layouts, and configurations for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection | Algorithm Family: freelist_xor
 */

#ifndef HEAP_COOKIE_PROTECTION_TYPES_H
#define HEAP_COOKIE_PROTECTION_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define HEAP_COOKIE_PROTECTION_ALIGNMENT 64
#define HEAP_COOKIE_PROTECTION_CAPACITY 4096

typedef struct heap_cookie_protection_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
    uint64_t seed;
} heap_cookie_protection_config_t;

typedef struct heap_cookie_protection_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    double accumulator;
    heap_cookie_protection_config_t config;
} heap_cookie_protection_state_t;

#endif /* HEAP_COOKIE_PROTECTION_TYPES_H */
