/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

#include <stdint.h>

#define SECURE_FREELIST_XOR_BENCH_ITERATIONS 100000

typedef struct secure_freelist_xor_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} secure_freelist_xor_bench_metrics_t;
