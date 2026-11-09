/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct minimized_afl_seed_pack_sync_counter {
    volatile uint64_t count;
} minimized_afl_seed_pack_sync_counter_t;

static inline void minimized_afl_seed_pack_sync_inc(minimized_afl_seed_pack_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
