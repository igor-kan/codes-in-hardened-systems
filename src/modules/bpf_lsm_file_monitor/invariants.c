/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include <assert.h>
#include <math.h>

static inline void bpf_lsm_file_monitor_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
