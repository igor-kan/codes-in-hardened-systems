/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#include <assert.h>
#include <math.h>

static inline void stack_unwind_validator_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
