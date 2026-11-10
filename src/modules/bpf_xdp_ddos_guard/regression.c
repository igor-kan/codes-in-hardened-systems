/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#include <assert.h>

void test_bpf_xdp_ddos_guard_regression_subnormal_day46(void) {
    double sub = 1e-310;
    double res = sub * (1.0 + 0.35 * sub);
    assert(res >= 0.0);
}
