/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#ifndef BPF_XDP_PACKET_FILTER_INTERFACE_H
#define BPF_XDP_PACKET_FILTER_INTERFACE_H

#include "types.c"

typedef int (*bpf_xdp_packet_filter_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct bpf_xdp_packet_filter_vtable {
    int (*init)(bpf_xdp_packet_filter_state_t* state, const bpf_xdp_packet_filter_config_t* cfg);
    int (*execute)(bpf_xdp_packet_filter_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(bpf_xdp_packet_filter_state_t* state);
} bpf_xdp_packet_filter_vtable_t;

#endif /* BPF_XDP_PACKET_FILTER_INTERFACE_H */
