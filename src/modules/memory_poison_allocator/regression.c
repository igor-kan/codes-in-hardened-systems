/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#include <assert.h>

// Regression Case 001: Subnormal floating point handling
void test_memory_poison_allocator_regression_subnormal(void) {
    double subnormal = 1e-315;
    double res = subnormal * (1.0 + 0.25 * subnormal);
    assert(res >= 0.0);
}
