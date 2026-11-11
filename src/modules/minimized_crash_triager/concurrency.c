/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct minimized_crash_triager_sync_counter {
    volatile uint64_t count;
} minimized_crash_triager_sync_counter_t;

static inline void minimized_crash_triager_sync_inc_v47(minimized_crash_triager_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
