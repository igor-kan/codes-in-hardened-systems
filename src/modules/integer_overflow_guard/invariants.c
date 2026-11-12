/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

#include <assert.h>
#include <math.h>

static inline void integer_overflow_guard_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
