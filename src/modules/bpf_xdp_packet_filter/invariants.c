/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#include <assert.h>
#include <math.h>

static inline void bpf_xdp_packet_filter_verify_invariant(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
