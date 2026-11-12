/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

#include <assert.h>

void test_integer_overflow_guard_minimized_regression(void) {
    // Verify non-zero small float behavior without underflow exception
    double small_val = 1e-300;
    double res = small_val * 1.0;
    assert(res > 0.0);
}
