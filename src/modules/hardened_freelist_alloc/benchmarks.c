/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#include <stdint.h>

#define HARDENED_FREELIST_ALLOC_BENCH_SAMPLES 100000

typedef struct hardened_freelist_alloc_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} hardened_freelist_alloc_bench_stats_t;
