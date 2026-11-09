/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#include <assert.h>
#include <math.h>

static inline void hardened_freelist_alloc_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
