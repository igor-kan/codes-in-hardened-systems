/**
 * Microbenchmark harness and cycle latency profiling for Strict Syscall Whitelist Seccomp-BPF Generator.
 * Module: sandbox_seccomp_bpf
 */

#ifndef BENCH_SANDBOX_SECCOMP_BPF_H
#define BENCH_SANDBOX_SECCOMP_BPF_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct sandbox_seccomp_bpf_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} sandbox_seccomp_bpf_bench_metrics_t;

#endif /* BENCH_SANDBOX_SECCOMP_BPF_H */
