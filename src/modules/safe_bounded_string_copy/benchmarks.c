/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#include <stdint.h>

#define SAFE_BOUNDED_STRING_COPY_BENCH_CYCLES 100000

typedef struct safe_bounded_string_copy_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} safe_bounded_string_copy_profile_results_t;
