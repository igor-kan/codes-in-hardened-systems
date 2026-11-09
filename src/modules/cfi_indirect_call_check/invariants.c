/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#include <assert.h>
#include <math.h>

static inline void cfi_indirect_call_check_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
