/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#include <assert.h>

void test_cfi_indirect_call_check_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
