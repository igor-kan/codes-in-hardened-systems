/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

typedef enum bpf_xdp_ddos_guard_error_code {
    BPF_XDP_DDOS_GUARD_STATUS_OK = 0,
    BPF_XDP_DDOS_GUARD_ERR_NULL_PTR = -10,
    BPF_XDP_DDOS_GUARD_ERR_OUT_OF_BOUNDS = -11,
    BPF_XDP_DDOS_GUARD_ERR_DIVERGENCE = -12
} bpf_xdp_ddos_guard_error_code_t;

const char* bpf_xdp_ddos_guard_error_message(bpf_xdp_ddos_guard_error_code_t code) {
    switch (code) {
        case BPF_XDP_DDOS_GUARD_STATUS_OK: return "Operational success";
        case BPF_XDP_DDOS_GUARD_ERR_NULL_PTR: return "Null pointer argument";
        case BPF_XDP_DDOS_GUARD_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case BPF_XDP_DDOS_GUARD_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
