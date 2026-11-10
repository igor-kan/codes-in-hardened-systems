/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct safe_stack_protector_sync_counter {
    volatile uint64_t count;
} safe_stack_protector_sync_counter_t;

static inline void safe_stack_protector_sync_inc(safe_stack_protector_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
