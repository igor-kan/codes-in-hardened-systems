/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct memory_guard_pages_sync_counter {
    volatile uint64_t count;
} memory_guard_pages_sync_counter_t;

static inline void memory_guard_pages_sync_inc(memory_guard_pages_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
