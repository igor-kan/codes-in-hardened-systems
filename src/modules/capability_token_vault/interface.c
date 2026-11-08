/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#ifndef CAPABILITY_TOKEN_VAULT_INTERFACE_H
#define CAPABILITY_TOKEN_VAULT_INTERFACE_H

#include "types.c"

typedef int (*capability_token_vault_transform_fn)(const double* in_data, double* out_data, size_t n);

typedef struct capability_token_vault_interface {
    int (*init)(capability_token_vault_state_t* state, const capability_token_vault_config_t* cfg);
    int (*execute)(capability_token_vault_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(capability_token_vault_state_t* state);
    int (*destroy)(capability_token_vault_state_t* state);
} capability_token_vault_interface_t;

#endif /* CAPABILITY_TOKEN_VAULT_INTERFACE_H */
