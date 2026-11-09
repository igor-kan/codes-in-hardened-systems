/**
 * @file types.c
 * @brief Core types and configuration for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#ifndef MINIMIZED_AFL_SEED_PACK_TYPES_H
#define MINIMIZED_AFL_SEED_PACK_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MINIMIZED_AFL_SEED_PACK_ALIGNMENT 64
#define MINIMIZED_AFL_SEED_PACK_CAPACITY 2048

typedef struct minimized_afl_seed_pack_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} minimized_afl_seed_pack_config_t;

typedef struct minimized_afl_seed_pack_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    minimized_afl_seed_pack_config_t config;
} minimized_afl_seed_pack_state_t;

#endif /* MINIMIZED_AFL_SEED_PACK_TYPES_H */
