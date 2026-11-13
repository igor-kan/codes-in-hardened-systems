/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include <stdint.h>

#define SAFE_MEMORY_ZEROIZE_BENCH_ITERATIONS 100000

typedef struct safe_memory_zeroize_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} safe_memory_zeroize_bench_metrics_t;
