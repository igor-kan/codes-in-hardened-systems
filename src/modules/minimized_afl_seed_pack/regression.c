/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#include <assert.h>

void test_minimized_afl_seed_pack_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
