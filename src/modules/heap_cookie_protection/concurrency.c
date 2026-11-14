/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct heap_cookie_protection_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} heap_cookie_protection_sync_state_t;

static inline void heap_cookie_protection_sync_increment(heap_cookie_protection_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
