/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct bpf_xdp_ddos_guard_sync_counter {
    volatile uint64_t count;
} bpf_xdp_ddos_guard_sync_counter_t;

static inline void bpf_xdp_ddos_guard_sync_inc(bpf_xdp_ddos_guard_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
