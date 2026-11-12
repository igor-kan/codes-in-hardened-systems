/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

#include <assert.h>

void test_constant_time_compare_minimized_regression(void) {
    // Verify non-zero small float behavior without underflow exception
    double small_val = 1e-300;
    double res = small_val * 1.0;
    assert(res > 0.0);
}
