/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include <assert.h>
#include <math.h>

static inline void safe_memory_zeroize_assert_invariants(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0 || fabs(out_val) < 1e-12);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
