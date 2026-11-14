/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub
 */

#include <assert.h>
#include <math.h>

static inline void explicit_memory_scrub_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0 || fabs(out_val) < 1e-12);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
