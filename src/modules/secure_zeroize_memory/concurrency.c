/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct secure_zeroize_memory_sync_counter {
    volatile uint64_t count;
} secure_zeroize_memory_sync_counter_t;

static inline void secure_zeroize_memory_sync_inc(secure_zeroize_memory_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
