/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct integer_overflow_guard_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} integer_overflow_guard_atomic_state_t;

static inline void integer_overflow_guard_atomic_increment(integer_overflow_guard_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
