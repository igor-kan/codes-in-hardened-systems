/**
 * @file types.c
 * @brief Core types and configuration for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#ifndef SECCOMP_STRICT_JAIL_TYPES_H
#define SECCOMP_STRICT_JAIL_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SECCOMP_STRICT_JAIL_ALIGNMENT 64
#define SECCOMP_STRICT_JAIL_CAPACITY 4096

typedef struct seccomp_strict_jail_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} seccomp_strict_jail_config_t;

typedef struct seccomp_strict_jail_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    seccomp_strict_jail_config_t config;
} seccomp_strict_jail_state_t;

#endif /* SECCOMP_STRICT_JAIL_TYPES_H */
