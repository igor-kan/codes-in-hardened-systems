/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Overlap-Aware Bounds-Checked Memory Copy with Abort.
 * Module: bounds_checked_memcpy
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct bounds_checked_memcpy_reentrant_lock {
    volatile uint64_t sequence;
    volatile uint32_t concurrency_count;
} bounds_checked_memcpy_reentrant_lock_t;

static inline void bounds_checked_memcpy_seq_advance(bounds_checked_memcpy_reentrant_lock_t* lk) {
    __atomic_fetch_add(&lk->sequence, 1, __ATOMIC_RELEASE);
}
