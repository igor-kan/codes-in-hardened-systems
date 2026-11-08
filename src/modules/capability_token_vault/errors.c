/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

typedef enum capability_token_vault_error {
    CAPABILITY_TOKEN_VAULT_OK = 0,
    CAPABILITY_TOKEN_VAULT_ERR_NULL = -100,
    CAPABILITY_TOKEN_VAULT_ERR_CAPACITY = -101,
    CAPABILITY_TOKEN_VAULT_ERR_CONVERGENCE = -102
} capability_token_vault_error_t;

const char* capability_token_vault_strerror(capability_token_vault_error_t err) {
    switch (err) {
        case CAPABILITY_TOKEN_VAULT_OK: return "Success";
        case CAPABILITY_TOKEN_VAULT_ERR_NULL: return "Encountered null pointer argument";
        case CAPABILITY_TOKEN_VAULT_ERR_CAPACITY: return "Capacity limit exceeded";
        case CAPABILITY_TOKEN_VAULT_ERR_CONVERGENCE: return "Numerical algorithm failed to converge";
        default: return "Unknown error";
    }
}
