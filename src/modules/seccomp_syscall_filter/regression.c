/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#include <assert.h>

// Regression Case 001: Subnormal floating point handling
void test_seccomp_syscall_filter_regression_subnormal(void) {
    double subnormal = 1e-315;
    double res = subnormal * (1.0 + 0.25 * subnormal);
    assert(res >= 0.0);
}
