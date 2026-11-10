/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#include <assert.h>
#include <math.h>

static inline void constant_time_crypto_mem_verify_contract(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
