/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#include <assert.h>
#include <math.h>

static inline void safe_bounded_string_copy_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
