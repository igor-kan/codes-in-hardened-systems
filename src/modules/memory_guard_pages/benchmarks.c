/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#include <stdint.h>

#define MEMORY_GUARD_PAGES_BENCH_SAMPLES 100000

typedef struct memory_guard_pages_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} memory_guard_pages_bench_stats_t;
