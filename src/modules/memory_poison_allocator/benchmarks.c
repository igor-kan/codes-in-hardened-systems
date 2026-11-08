/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#include <stdint.h>

#define MEMORY_POISON_ALLOCATOR_BENCH_ITERATIONS 100000

typedef struct memory_poison_allocator_bench_result {
    uint64_t total_cycles;
    double throughput_ops_sec;
} memory_poison_allocator_bench_result_t;
