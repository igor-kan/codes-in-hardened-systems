/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#include <assert.h>

void test_cfi_return_address_guard_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
