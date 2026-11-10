/**
 * @file fuzz_target.c
 * @brief Continuous fuzzing harness for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput_bpf_xdp_ddos_guard_day46(const uint8_t* data, size_t size) {
    if (size < sizeof(double)) return 0;
    const double* val = (const double*)data;
    if (*val == *val && *val < 1e5 && *val > -1e5) {
        double res = (*val) * (1.0 + 0.35 * (*val));
        (void)res;
    }
    return 0;
}
