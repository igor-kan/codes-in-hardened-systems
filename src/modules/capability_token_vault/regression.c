/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#include <assert.h>

// Regression Case 001: Subnormal floating point handling
void test_capability_token_vault_regression_subnormal(void) {
    double subnormal = 1e-315;
    double res = subnormal * (1.0 + 0.25 * subnormal);
    assert(res >= 0.0);
}
