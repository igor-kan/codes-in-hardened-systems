/**
 * @file types.c
 * @brief Core types and configuration for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#ifndef SANDBOX_LANDLOCK_RULESET_TYPES_H
#define SANDBOX_LANDLOCK_RULESET_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SANDBOX_LANDLOCK_RULESET_ALIGNMENT 64
#define SANDBOX_LANDLOCK_RULESET_CAPACITY 2048

typedef struct sandbox_landlock_ruleset_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} sandbox_landlock_ruleset_config_t;

typedef struct sandbox_landlock_ruleset_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    sandbox_landlock_ruleset_config_t config;
} sandbox_landlock_ruleset_state_t;

#endif /* SANDBOX_LANDLOCK_RULESET_TYPES_H */
