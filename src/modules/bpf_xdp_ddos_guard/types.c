/**
 * @file types.c
 * @brief Core types and configuration for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#ifndef BPF_XDP_DDOS_GUARD_TYPES_H
#define BPF_XDP_DDOS_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define BPF_XDP_DDOS_GUARD_ALIGNMENT 64
#define BPF_XDP_DDOS_GUARD_CAPACITY 4096

typedef struct bpf_xdp_ddos_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} bpf_xdp_ddos_guard_config_t;

typedef struct bpf_xdp_ddos_guard_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    bpf_xdp_ddos_guard_config_t config;
} bpf_xdp_ddos_guard_state_t;

#endif /* BPF_XDP_DDOS_GUARD_TYPES_H */
