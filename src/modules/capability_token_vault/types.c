/**
 * @file types.c
 * @brief Core types and configuration for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#ifndef CAPABILITY_TOKEN_VAULT_TYPES_H
#define CAPABILITY_TOKEN_VAULT_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CAPABILITY_TOKEN_VAULT_ALIGNMENT 64
#define CAPABILITY_TOKEN_VAULT_DEFAULT_CAPACITY 1024

typedef struct capability_token_vault_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} capability_token_vault_config_t;

typedef struct capability_token_vault_state {
    void* memory_arena;
    size_t count;
    uint64_t metric_cycles;
    capability_token_vault_config_t config;
} capability_token_vault_state_t;

#endif /* CAPABILITY_TOKEN_VAULT_TYPES_H */
