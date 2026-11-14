/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select
 */

#include <stdint.h>

#define CONSTANT_TIME_SELECT_BENCH_ITERATIONS 100000

typedef struct constant_time_select_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} constant_time_select_bench_metrics_t;
