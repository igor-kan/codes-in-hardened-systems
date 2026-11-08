/**
 * @file types.c
 * @brief Core types and configuration for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#ifndef ASLR_ENTROPY_VALIDATOR_TYPES_H
#define ASLR_ENTROPY_VALIDATOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define ASLR_ENTROPY_VALIDATOR_ALIGNMENT 64
#define ASLR_ENTROPY_VALIDATOR_DEFAULT_CAPACITY 1024

typedef struct aslr_entropy_validator_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} aslr_entropy_validator_config_t;

typedef struct aslr_entropy_validator_state {
    void* memory_arena;
    size_t count;
    uint64_t metric_cycles;
    aslr_entropy_validator_config_t config;
} aslr_entropy_validator_state_t;

#endif /* ASLR_ENTROPY_VALIDATOR_TYPES_H */
