/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Safe Memory Copy and Buffer Slicing with Bounds Check.
 * Module: bounds_checked_buffer
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct bounds_checked_buffer_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} bounds_checked_buffer_sync_state_t;

static inline void bounds_checked_buffer_sync_increment(bounds_checked_buffer_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
