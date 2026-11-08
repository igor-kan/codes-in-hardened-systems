/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct seccomp_syscall_filter_atomic_counter {
    volatile uint64_t value;
} seccomp_syscall_filter_atomic_counter_t;

static inline void seccomp_syscall_filter_counter_inc(seccomp_syscall_filter_atomic_counter_t* c) {
    __atomic_fetch_add(&c->value, 1, __ATOMIC_RELAXED);
}
