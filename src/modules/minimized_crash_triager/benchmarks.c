/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#include <stdint.h>

#define MINIMIZED_CRASH_TRIAGER_BENCH_SAMPLES 100000

typedef struct minimized_crash_triager_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} minimized_crash_triager_bench_stats_t;
