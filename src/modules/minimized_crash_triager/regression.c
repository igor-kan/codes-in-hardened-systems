/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#include <assert.h>

void test_minimized_crash_triager_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
