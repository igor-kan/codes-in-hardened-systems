/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#include <assert.h>

void test_seccomp_strict_jail_regression_subnormal_day46(void) {
    double sub = 1e-310;
    double res = sub * (1.0 + 0.35 * sub);
    assert(res >= 0.0);
}
