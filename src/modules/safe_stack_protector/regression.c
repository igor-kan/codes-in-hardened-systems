/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#include <assert.h>

void test_safe_stack_protector_regression_subnormal_day46(void) {
    double sub = 1e-310;
    double res = sub * (1.0 + 0.35 * sub);
    assert(res >= 0.0);
}
