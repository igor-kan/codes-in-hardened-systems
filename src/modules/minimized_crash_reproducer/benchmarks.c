/**
 * Microbenchmark harness and cycle latency profiling for Deterministic Crash Replay and Delta-Debugger.
 * Module: minimized_crash_reproducer
 */

#ifndef BENCH_MINIMIZED_CRASH_REPRODUCER_H
#define BENCH_MINIMIZED_CRASH_REPRODUCER_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct minimized_crash_reproducer_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} minimized_crash_reproducer_bench_metrics_t;

#endif /* BENCH_MINIMIZED_CRASH_REPRODUCER_H */
