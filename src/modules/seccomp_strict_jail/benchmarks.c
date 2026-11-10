/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#include <stdint.h>

#define SECCOMP_STRICT_JAIL_BENCH_SAMPLES 100000

typedef struct seccomp_strict_jail_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} seccomp_strict_jail_bench_stats_t;
