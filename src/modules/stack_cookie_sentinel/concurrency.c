/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct stack_cookie_sentinel_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} stack_cookie_sentinel_sync_state_t;

static inline void stack_cookie_sentinel_sync_increment(stack_cookie_sentinel_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
