/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct sandbox_landlock_ruleset_sync_counter {
    volatile uint64_t count;
} sandbox_landlock_ruleset_sync_counter_t;

static inline void sandbox_landlock_ruleset_sync_inc(sandbox_landlock_ruleset_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
