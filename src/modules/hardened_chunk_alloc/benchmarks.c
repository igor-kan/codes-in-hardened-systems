/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#include <stdint.h>

#define HARDENED_CHUNK_ALLOC_BENCH_SAMPLES 100000

typedef struct hardened_chunk_alloc_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} hardened_chunk_alloc_bench_stats_t;
