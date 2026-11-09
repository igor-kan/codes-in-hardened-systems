/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#include <stdint.h>

#define SECURE_ZEROIZE_MEMORY_BENCH_SAMPLES 100000

typedef struct secure_zeroize_memory_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} secure_zeroize_memory_bench_stats_t;
