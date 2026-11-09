/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#include <stdint.h>

#define BPF_XDP_PACKET_FILTER_BENCH_SAMPLES 100000

typedef struct bpf_xdp_packet_filter_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} bpf_xdp_packet_filter_bench_stats_t;
