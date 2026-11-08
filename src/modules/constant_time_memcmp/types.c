/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for Side-Channel Immune Constant-Time Memory Comparison.
 * Module: constant_time_memcmp
 */

#ifndef CONSTANT_TIME_MEMCMP_TYPES_H
#define CONSTANT_TIME_MEMCMP_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CONSTANT_TIME_MEMCMP_ALIGNMENT 64
#define CONSTANT_TIME_MEMCMP_SUCCESS 0
#define CONSTANT_TIME_MEMCMP_ERR_NULL_PTR -1
#define CONSTANT_TIME_MEMCMP_ERR_INVALID_PARAM -2
#define CONSTANT_TIME_MEMCMP_ERR_OUT_OF_BOUNDS -3

typedef struct constant_time_memcmp_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} constant_time_memcmp_config_t;

typedef struct constant_time_memcmp_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    constant_time_memcmp_config_t config;
} constant_time_memcmp_context_t;

int constant_time_memcmp_init(constant_time_memcmp_context_t* ctx, const constant_time_memcmp_config_t* cfg);
int constant_time_memcmp_destroy(constant_time_memcmp_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* CONSTANT_TIME_MEMCMP_TYPES_H */
