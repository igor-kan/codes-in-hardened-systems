/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct stack_unwind_validator_sync_counter {
    volatile uint64_t count;
} stack_unwind_validator_sync_counter_t;

static inline void stack_unwind_validator_sync_inc_v47(stack_unwind_validator_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
