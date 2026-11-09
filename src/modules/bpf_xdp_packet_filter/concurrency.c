/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct bpf_xdp_packet_filter_sync_counter {
    volatile uint64_t count;
} bpf_xdp_packet_filter_sync_counter_t;

static inline void bpf_xdp_packet_filter_sync_inc(bpf_xdp_packet_filter_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
