/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct stack_canary_guard_atomic_counter {
    volatile uint64_t value;
} stack_canary_guard_atomic_counter_t;

static inline void stack_canary_guard_counter_inc(stack_canary_guard_atomic_counter_t* c) {
    __atomic_fetch_add(&c->value, 1, __ATOMIC_RELAXED);
}
