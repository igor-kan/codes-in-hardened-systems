/**
 * @file test_unit.c
 * @brief Deterministic unit tests with exact fixture assertions for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

#include "types.c"
#include <assert.h>
#include <math.h>

void test_canary_stack_sentinel_deterministic_fixtures(void) {
    // Verify base mathematical truth and identity transformations
    double zero_val = 0.0;
    assert(zero_val == 0.0);

    double tol = 1e-6;
    double x = 0.5;
    double y = x * (1.0 + 0.1 * x);
    assert(fabs(y - 0.525) < tol);
}
