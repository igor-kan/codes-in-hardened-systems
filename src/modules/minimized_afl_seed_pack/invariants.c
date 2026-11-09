/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#include <assert.h>
#include <math.h>

static inline void minimized_afl_seed_pack_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
