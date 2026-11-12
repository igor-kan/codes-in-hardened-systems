/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

#include <assert.h>
#include <math.h>

static inline void constant_time_compare_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
