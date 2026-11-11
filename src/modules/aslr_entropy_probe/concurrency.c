/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct aslr_entropy_probe_sync_counter {
    volatile uint64_t count;
} aslr_entropy_probe_sync_counter_t;

static inline void aslr_entropy_probe_sync_inc_v47(aslr_entropy_probe_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
