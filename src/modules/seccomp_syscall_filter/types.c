/**
 * @file types.c
 * @brief Core types and configuration for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#ifndef SECCOMP_SYSCALL_FILTER_TYPES_H
#define SECCOMP_SYSCALL_FILTER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SECCOMP_SYSCALL_FILTER_ALIGNMENT 64
#define SECCOMP_SYSCALL_FILTER_DEFAULT_CAPACITY 1024

typedef struct seccomp_syscall_filter_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} seccomp_syscall_filter_config_t;

typedef struct seccomp_syscall_filter_state {
    void* memory_arena;
    size_t count;
    uint64_t metric_cycles;
    seccomp_syscall_filter_config_t config;
} seccomp_syscall_filter_state_t;

#endif /* SECCOMP_SYSCALL_FILTER_TYPES_H */
