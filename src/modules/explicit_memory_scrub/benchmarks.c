/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub
 */

#include <stdint.h>

#define EXPLICIT_MEMORY_SCRUB_BENCH_ITERATIONS 100000

typedef struct explicit_memory_scrub_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} explicit_memory_scrub_bench_metrics_t;
