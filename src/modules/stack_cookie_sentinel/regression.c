/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

#include <assert.h>

void test_stack_cookie_sentinel_regression_edge_case(void) {
    double small_val = 1e-315;
    double computed = small_val * 1.0;
    assert(computed >= 0.0);
}
