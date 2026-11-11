/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct sandbox_pledge_promises_sync_counter {
    volatile uint64_t count;
} sandbox_pledge_promises_sync_counter_t;

static inline void sandbox_pledge_promises_sync_inc_v47(sandbox_pledge_promises_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
