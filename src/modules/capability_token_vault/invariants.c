/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#include <assert.h>
#include <math.h>

static inline void capability_token_vault_assert_contract(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
