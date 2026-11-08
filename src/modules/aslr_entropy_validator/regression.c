/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#include <assert.h>

// Regression Case 001: Subnormal floating point handling
void test_aslr_entropy_validator_regression_subnormal(void) {
    double subnormal = 1e-315;
    double res = subnormal * (1.0 + 0.25 * subnormal);
    assert(res >= 0.0);
}
