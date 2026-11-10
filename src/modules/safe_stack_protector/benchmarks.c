/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#include <stdint.h>

#define SAFE_STACK_PROTECTOR_BENCH_SAMPLES 100000

typedef struct safe_stack_protector_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} safe_stack_protector_bench_stats_t;
