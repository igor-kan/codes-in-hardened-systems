/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct aslr_entropy_validator_atomic_counter {
    volatile uint64_t value;
} aslr_entropy_validator_atomic_counter_t;

static inline void aslr_entropy_validator_counter_inc(aslr_entropy_validator_atomic_counter_t* c) {
    __atomic_fetch_add(&c->value, 1, __ATOMIC_RELAXED);
}
