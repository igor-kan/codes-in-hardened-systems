/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#include <assert.h>
#include <math.h>

static inline void bpf_xdp_ddos_guard_verify_contract(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
