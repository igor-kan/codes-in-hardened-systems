/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Safe Memory Copy and Buffer Slicing with Bounds Check.
 * Module: bounds_checked_buffer
 */

#include <stdint.h>

#define BOUNDS_CHECKED_BUFFER_BENCH_ITERATIONS 100000

typedef struct bounds_checked_buffer_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} bounds_checked_buffer_bench_metrics_t;
