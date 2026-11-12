/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct constant_time_compare_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} constant_time_compare_atomic_state_t;

static inline void constant_time_compare_atomic_increment(constant_time_compare_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
