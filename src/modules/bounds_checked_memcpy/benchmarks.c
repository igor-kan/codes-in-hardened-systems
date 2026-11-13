/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Overlap-Aware Bounds-Checked Memory Copy with Abort.
 * Module: bounds_checked_memcpy
 */

#include <stdint.h>

#define BOUNDS_CHECKED_MEMCPY_BENCH_ITERATIONS 100000

typedef struct bounds_checked_memcpy_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} bounds_checked_memcpy_bench_metrics_t;
