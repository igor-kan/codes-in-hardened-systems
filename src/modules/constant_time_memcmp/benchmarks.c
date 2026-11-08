/**
 * Microbenchmark harness and cycle latency profiling for Side-Channel Immune Constant-Time Memory Comparison.
 * Module: constant_time_memcmp
 */

#ifndef BENCH_CONSTANT_TIME_MEMCMP_H
#define BENCH_CONSTANT_TIME_MEMCMP_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct constant_time_memcmp_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} constant_time_memcmp_bench_metrics_t;

#endif /* BENCH_CONSTANT_TIME_MEMCMP_H */
