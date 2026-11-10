/**
 * @file types.c
 * @brief Core types and configuration for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#ifndef CONSTANT_TIME_CRYPTO_MEM_TYPES_H
#define CONSTANT_TIME_CRYPTO_MEM_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CONSTANT_TIME_CRYPTO_MEM_ALIGNMENT 64
#define CONSTANT_TIME_CRYPTO_MEM_CAPACITY 4096

typedef struct constant_time_crypto_mem_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} constant_time_crypto_mem_config_t;

typedef struct constant_time_crypto_mem_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    constant_time_crypto_mem_config_t config;
} constant_time_crypto_mem_state_t;

#endif /* CONSTANT_TIME_CRYPTO_MEM_TYPES_H */
