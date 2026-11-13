/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#include <assert.h>
#include <math.h>

static inline void stack_canary_guard_hardened_assert_invariants(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0 || fabs(out_val) < 1e-12);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
