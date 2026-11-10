/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#include <assert.h>
#include <math.h>

static inline void safe_stack_protector_verify_contract(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
