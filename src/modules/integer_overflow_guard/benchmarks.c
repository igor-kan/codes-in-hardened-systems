/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

#include <stdint.h>

#define INTEGER_OVERFLOW_GUARD_BENCH_CYCLES 100000

typedef struct integer_overflow_guard_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} integer_overflow_guard_profile_results_t;
