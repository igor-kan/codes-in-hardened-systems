/**
 * @file concurrency.c
 * @brief Thread-safe reentrancy and atomic state primitives for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct secure_freelist_xor_reentrant_lock {
    volatile uint64_t sequence;
    volatile uint32_t concurrency_count;
} secure_freelist_xor_reentrant_lock_t;

static inline void secure_freelist_xor_seq_advance(secure_freelist_xor_reentrant_lock_t* lk) {
    __atomic_fetch_add(&lk->sequence, 1, __ATOMIC_RELEASE);
}
