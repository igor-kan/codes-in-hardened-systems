/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct integer_saturating_arithmetic_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} integer_saturating_arithmetic_sync_state_t;

static inline void integer_saturating_arithmetic_sync_increment(integer_saturating_arithmetic_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
