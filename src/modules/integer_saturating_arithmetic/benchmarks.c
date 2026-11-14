/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

#include <stdint.h>

#define INTEGER_SATURATING_ARITHMETIC_BENCH_ITERATIONS 100000

typedef struct integer_saturating_arithmetic_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} integer_saturating_arithmetic_bench_metrics_t;
