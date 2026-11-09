/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct cfi_indirect_call_check_sync_counter {
    volatile uint64_t count;
} cfi_indirect_call_check_sync_counter_t;

static inline void cfi_indirect_call_check_sync_inc(cfi_indirect_call_check_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
