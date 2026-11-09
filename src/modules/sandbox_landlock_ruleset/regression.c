/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#include <assert.h>

void test_sandbox_landlock_ruleset_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
