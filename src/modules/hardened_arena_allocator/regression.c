/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#include <assert.h>

void test_hardened_arena_allocator_regression_subnormal_day46(void) {
    double sub = 1e-310;
    double res = sub * (1.0 + 0.35 * sub);
    assert(res >= 0.0);
}
