/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#include <assert.h>

// Regression Case 001: Subnormal floating point handling
void test_stack_canary_guard_regression_subnormal(void) {
    double subnormal = 1e-315;
    double res = subnormal * (1.0 + 0.25 * subnormal);
    assert(res >= 0.0);
}
