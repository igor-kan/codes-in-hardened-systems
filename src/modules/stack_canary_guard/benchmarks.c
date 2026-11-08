/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#include <stdint.h>

#define STACK_CANARY_GUARD_BENCH_ITERATIONS 100000

typedef struct stack_canary_guard_bench_result {
    uint64_t total_cycles;
    double throughput_ops_sec;
} stack_canary_guard_bench_result_t;
