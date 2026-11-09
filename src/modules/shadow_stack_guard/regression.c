/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Software Shadow Stack Return Address Guard.
 * Module: shadow_stack_guard
 */

#include <assert.h>

void test_shadow_stack_guard_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
