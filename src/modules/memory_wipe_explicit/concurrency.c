/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct memory_wipe_explicit_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} memory_wipe_explicit_atomic_state_t;

static inline void memory_wipe_explicit_atomic_increment(memory_wipe_explicit_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
