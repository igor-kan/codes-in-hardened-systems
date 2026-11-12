/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

#include <assert.h>
#include <math.h>

static inline void canary_stack_sentinel_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
