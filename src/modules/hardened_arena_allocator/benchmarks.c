/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#include <stdint.h>

#define HARDENED_ARENA_ALLOCATOR_BENCH_SAMPLES 100000

typedef struct hardened_arena_allocator_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} hardened_arena_allocator_bench_stats_t;
