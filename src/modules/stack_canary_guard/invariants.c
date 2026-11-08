/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#include <assert.h>
#include <math.h>

static inline void stack_canary_guard_assert_contract(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
