/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool capability_token_vault_is_valid_float(double x) {
    return isfinite(x);
}

static inline double capability_token_vault_sanitize_input(double x, double min_bound, double max_bound) {
    if (!isfinite(x)) return 0.0;
    if (x < min_bound) return min_bound;
    if (x > max_bound) return max_bound;
    return x;
}
