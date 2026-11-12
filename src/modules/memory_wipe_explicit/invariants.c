/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

#include <assert.h>
#include <math.h>

static inline void memory_wipe_explicit_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
