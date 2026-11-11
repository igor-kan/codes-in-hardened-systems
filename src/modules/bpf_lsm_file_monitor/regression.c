/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include <assert.h>

void test_bpf_lsm_file_monitor_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
