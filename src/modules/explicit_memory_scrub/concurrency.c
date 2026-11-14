/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct explicit_memory_scrub_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} explicit_memory_scrub_sync_state_t;

static inline void explicit_memory_scrub_sync_increment(explicit_memory_scrub_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
