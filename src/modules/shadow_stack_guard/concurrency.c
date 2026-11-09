/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Software Shadow Stack Return Address Guard.
 * Module: shadow_stack_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct shadow_stack_guard_sync_counter {
    volatile uint64_t count;
} shadow_stack_guard_sync_counter_t;

static inline void shadow_stack_guard_sync_inc(shadow_stack_guard_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
