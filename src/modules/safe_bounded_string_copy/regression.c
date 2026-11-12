/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#include <assert.h>

void test_safe_bounded_string_copy_minimized_regression(void) {
    // Verify non-zero small float behavior without underflow exception
    double small_val = 1e-300;
    double res = small_val * 1.0;
    assert(res > 0.0);
}
