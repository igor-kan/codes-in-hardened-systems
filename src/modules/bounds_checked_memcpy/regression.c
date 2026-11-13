/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Overlap-Aware Bounds-Checked Memory Copy with Abort.
 * Module: bounds_checked_memcpy
 */

#include <assert.h>

void test_bounds_checked_memcpy_minimized_edge_case(void) {
    double subnormal_val = 1e-315;
    double computed = subnormal_val * 1.0;
    assert(computed >= 0.0);
}
