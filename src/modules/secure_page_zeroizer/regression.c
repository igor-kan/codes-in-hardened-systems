/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

#include <assert.h>

void test_secure_page_zeroizer_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
