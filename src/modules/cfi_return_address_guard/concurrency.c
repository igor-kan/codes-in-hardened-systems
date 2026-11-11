/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct cfi_return_address_guard_sync_counter {
    volatile uint64_t count;
} cfi_return_address_guard_sync_counter_t;

static inline void cfi_return_address_guard_sync_inc_v47(cfi_return_address_guard_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
