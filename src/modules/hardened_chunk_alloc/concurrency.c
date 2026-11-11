/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct hardened_chunk_alloc_sync_counter {
    volatile uint64_t count;
} hardened_chunk_alloc_sync_counter_t;

static inline void hardened_chunk_alloc_sync_inc_v47(hardened_chunk_alloc_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
