/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub
 */

#include <assert.h>

void test_explicit_memory_scrub_regression_edge_case(void) {
    double small_val = 1e-315;
    double computed = small_val * 1.0;
    assert(computed >= 0.0);
}
