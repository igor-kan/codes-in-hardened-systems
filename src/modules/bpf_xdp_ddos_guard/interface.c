/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#ifndef BPF_XDP_DDOS_GUARD_INTERFACE_H
#define BPF_XDP_DDOS_GUARD_INTERFACE_H

#include "types.c"

typedef int (*bpf_xdp_ddos_guard_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct bpf_xdp_ddos_guard_vtable {
    int (*init)(bpf_xdp_ddos_guard_state_t* state, const bpf_xdp_ddos_guard_config_t* cfg);
    int (*execute)(bpf_xdp_ddos_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(bpf_xdp_ddos_guard_state_t* state);
    int (*destroy)(bpf_xdp_ddos_guard_state_t* state);
} bpf_xdp_ddos_guard_vtable_t;

#endif /* BPF_XDP_DDOS_GUARD_INTERFACE_H */
