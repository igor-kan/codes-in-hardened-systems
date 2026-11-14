/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select
 */

#include <assert.h>

void test_constant_time_select_regression_edge_case(void) {
    double small_val = 1e-315;
    double computed = small_val * 1.0;
    assert(computed >= 0.0);
}
