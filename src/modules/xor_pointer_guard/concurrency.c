/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct xor_pointer_guard_atomic_state {
    volatile uint64_t counter;
    volatile uint32_t active_threads;
} xor_pointer_guard_atomic_state_t;

static inline void xor_pointer_guard_atomic_increment(xor_pointer_guard_atomic_state_t* s) {
    __atomic_fetch_add(&s->counter, 1, __ATOMIC_RELAXED);
}
