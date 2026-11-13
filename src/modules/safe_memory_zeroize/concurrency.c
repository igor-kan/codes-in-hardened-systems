/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct safe_memory_zeroize_reentrant_lock {
    volatile uint64_t sequence;
    volatile uint32_t concurrency_count;
} safe_memory_zeroize_reentrant_lock_t;

static inline void safe_memory_zeroize_seq_advance(safe_memory_zeroize_reentrant_lock_t* lk) {
    __atomic_fetch_add(&lk->sequence, 1, __ATOMIC_RELEASE);
}
