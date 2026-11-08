/**
 * Microbenchmark harness and cycle latency profiling for In-Kernel eBPF Packet Inspection and Memory Verifier.
 * Module: bpf_filter_verifier
 */

#ifndef BENCH_BPF_FILTER_VERIFIER_H
#define BENCH_BPF_FILTER_VERIFIER_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct bpf_filter_verifier_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} bpf_filter_verifier_bench_metrics_t;

#endif /* BENCH_BPF_FILTER_VERIFIER_H */
