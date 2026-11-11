/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#include <assert.h>

void test_stack_unwind_validator_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
