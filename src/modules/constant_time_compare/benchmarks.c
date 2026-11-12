/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

#include <stdint.h>

#define CONSTANT_TIME_COMPARE_BENCH_CYCLES 100000

typedef struct constant_time_compare_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} constant_time_compare_profile_results_t;
