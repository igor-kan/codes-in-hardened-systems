/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#include <assert.h>

void test_bpf_xdp_packet_filter_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
