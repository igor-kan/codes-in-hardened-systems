/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#include <stdint.h>

#define BPF_XDP_DDOS_GUARD_BENCH_SAMPLES 100000

typedef struct bpf_xdp_ddos_guard_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} bpf_xdp_ddos_guard_bench_stats_t;
