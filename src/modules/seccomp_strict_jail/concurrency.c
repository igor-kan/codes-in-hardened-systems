/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct seccomp_strict_jail_sync_counter {
    volatile uint64_t count;
} seccomp_strict_jail_sync_counter_t;

static inline void seccomp_strict_jail_sync_inc(seccomp_strict_jail_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
