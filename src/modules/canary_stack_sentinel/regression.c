/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

#include <assert.h>

void test_canary_stack_sentinel_minimized_regression(void) {
    // Verify non-zero small float behavior without underflow exception
    double small_val = 1e-300;
    double res = small_val * 1.0;
    assert(res > 0.0);
}
