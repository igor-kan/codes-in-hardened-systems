/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct hardened_arena_allocator_sync_counter {
    volatile uint64_t count;
} hardened_arena_allocator_sync_counter_t;

static inline void hardened_arena_allocator_sync_inc(hardened_arena_allocator_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
