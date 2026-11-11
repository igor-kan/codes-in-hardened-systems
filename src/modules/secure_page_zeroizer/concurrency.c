/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct secure_page_zeroizer_sync_counter {
    volatile uint64_t count;
} secure_page_zeroizer_sync_counter_t;

static inline void secure_page_zeroizer_sync_inc_v47(secure_page_zeroizer_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
