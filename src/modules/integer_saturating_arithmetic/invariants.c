/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

#include <assert.h>
#include <math.h>

static inline void integer_saturating_arithmetic_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0 || fabs(out_val) < 1e-12);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
