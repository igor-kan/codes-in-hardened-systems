/**
 * @file types.c
 * @brief Core types and configuration for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#ifndef BPF_XDP_PACKET_FILTER_TYPES_H
#define BPF_XDP_PACKET_FILTER_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define BPF_XDP_PACKET_FILTER_ALIGNMENT 64
#define BPF_XDP_PACKET_FILTER_CAPACITY 2048

typedef struct bpf_xdp_packet_filter_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} bpf_xdp_packet_filter_config_t;

typedef struct bpf_xdp_packet_filter_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    bpf_xdp_packet_filter_config_t config;
} bpf_xdp_packet_filter_state_t;

#endif /* BPF_XDP_PACKET_FILTER_TYPES_H */
