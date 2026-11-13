/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct stack_canary_guard_hardened_reentrant_lock {
    volatile uint64_t sequence;
    volatile uint32_t concurrency_count;
} stack_canary_guard_hardened_reentrant_lock_t;

static inline void stack_canary_guard_hardened_seq_advance(stack_canary_guard_hardened_reentrant_lock_t* lk) {
    __atomic_fetch_add(&lk->sequence, 1, __ATOMIC_RELEASE);
}
