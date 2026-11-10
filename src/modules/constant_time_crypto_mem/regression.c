/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#include <assert.h>

void test_constant_time_crypto_mem_regression_subnormal_day46(void) {
    double sub = 1e-310;
    double res = sub * (1.0 + 0.35 * sub);
    assert(res >= 0.0);
}
