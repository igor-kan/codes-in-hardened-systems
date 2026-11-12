/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct safe_bounded_string_copy_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} safe_bounded_string_copy_atomic_state_t;

static inline void safe_bounded_string_copy_atomic_increment(safe_bounded_string_copy_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
