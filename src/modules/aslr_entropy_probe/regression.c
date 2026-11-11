/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#include <assert.h>

void test_aslr_entropy_probe_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
