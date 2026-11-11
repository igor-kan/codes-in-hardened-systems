/**
 * @file types.c
 * @brief Core types and configuration for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#ifndef SANDBOX_PLEDGE_PROMISES_TYPES_H
#define SANDBOX_PLEDGE_PROMISES_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SANDBOX_PLEDGE_PROMISES_ALIGNMENT 64
#define SANDBOX_PLEDGE_PROMISES_DEFAULT_SZ 8192

typedef struct sandbox_pledge_promises_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} sandbox_pledge_promises_config_t;

typedef struct sandbox_pledge_promises_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    sandbox_pledge_promises_config_t config;
} sandbox_pledge_promises_state_t;

#endif /* SANDBOX_PLEDGE_PROMISES_TYPES_H */
