/**
 * @file types.c
 * @brief Core types and configuration for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

#ifndef SECURE_PAGE_ZEROIZER_TYPES_H
#define SECURE_PAGE_ZEROIZER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SECURE_PAGE_ZEROIZER_ALIGNMENT 64
#define SECURE_PAGE_ZEROIZER_DEFAULT_SZ 8192

typedef struct secure_page_zeroizer_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} secure_page_zeroizer_config_t;

typedef struct secure_page_zeroizer_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    secure_page_zeroizer_config_t config;
} secure_page_zeroizer_state_t;

#endif /* SECURE_PAGE_ZEROIZER_TYPES_H */
