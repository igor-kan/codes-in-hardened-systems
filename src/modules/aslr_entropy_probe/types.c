/**
 * @file types.c
 * @brief Core types and configuration for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#ifndef ASLR_ENTROPY_PROBE_TYPES_H
#define ASLR_ENTROPY_PROBE_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define ASLR_ENTROPY_PROBE_ALIGNMENT 64
#define ASLR_ENTROPY_PROBE_DEFAULT_SZ 8192

typedef struct aslr_entropy_probe_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} aslr_entropy_probe_config_t;

typedef struct aslr_entropy_probe_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    aslr_entropy_probe_config_t config;
} aslr_entropy_probe_state_t;

#endif /* ASLR_ENTROPY_PROBE_TYPES_H */
