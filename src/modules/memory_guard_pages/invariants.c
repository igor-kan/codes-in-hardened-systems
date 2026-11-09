/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#include <assert.h>
#include <math.h>

static inline void memory_guard_pages_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
