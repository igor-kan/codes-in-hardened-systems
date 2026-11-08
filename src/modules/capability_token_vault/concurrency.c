/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct capability_token_vault_atomic_counter {
    volatile uint64_t value;
} capability_token_vault_atomic_counter_t;

static inline void capability_token_vault_counter_inc(capability_token_vault_atomic_counter_t* c) {
    __atomic_fetch_add(&c->value, 1, __ATOMIC_RELAXED);
}
