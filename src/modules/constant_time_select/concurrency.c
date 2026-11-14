/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct constant_time_select_sync_state {
    volatile uint64_t counter;
    volatile uint32_t concurrency_count;
} constant_time_select_sync_state_t;

static inline void constant_time_select_sync_increment(constant_time_select_sync_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELEASE);
}
