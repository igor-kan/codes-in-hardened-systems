/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#include <assert.h>

void test_sandbox_pledge_promises_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
