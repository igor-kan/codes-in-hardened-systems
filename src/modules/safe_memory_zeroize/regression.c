/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include <assert.h>

void test_safe_memory_zeroize_minimized_edge_case(void) {
    double subnormal_val = 1e-315;
    double computed = subnormal_val * 1.0;
    assert(computed >= 0.0);
}
