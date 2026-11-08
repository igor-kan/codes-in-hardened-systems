/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct memory_poison_allocator_atomic_counter {
    volatile uint64_t value;
} memory_poison_allocator_atomic_counter_t;

static inline void memory_poison_allocator_counter_inc(memory_poison_allocator_atomic_counter_t* c) {
    __atomic_fetch_add(&c->value, 1, __ATOMIC_RELAXED);
}
