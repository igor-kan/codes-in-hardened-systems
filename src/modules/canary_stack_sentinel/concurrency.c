/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct canary_stack_sentinel_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} canary_stack_sentinel_atomic_state_t;

static inline void canary_stack_sentinel_atomic_increment(canary_stack_sentinel_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
