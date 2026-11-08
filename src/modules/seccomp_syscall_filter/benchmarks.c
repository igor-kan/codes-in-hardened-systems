/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#include <stdint.h>

#define SECCOMP_SYSCALL_FILTER_BENCH_ITERATIONS 100000

typedef struct seccomp_syscall_filter_bench_result {
    uint64_t total_cycles;
    double throughput_ops_sec;
} seccomp_syscall_filter_bench_result_t;
