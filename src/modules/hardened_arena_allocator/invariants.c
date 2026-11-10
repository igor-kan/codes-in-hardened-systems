/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#include <assert.h>
#include <math.h>

static inline void hardened_arena_allocator_verify_contract(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
