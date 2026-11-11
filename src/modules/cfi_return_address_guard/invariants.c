/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#include <assert.h>
#include <math.h>

static inline void cfi_return_address_guard_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
