/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct hardened_freelist_alloc_sync_counter {
    volatile uint64_t count;
} hardened_freelist_alloc_sync_counter_t;

static inline void hardened_freelist_alloc_sync_inc(hardened_freelist_alloc_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
