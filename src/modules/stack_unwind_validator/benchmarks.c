/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#include <stdint.h>

#define STACK_UNWIND_VALIDATOR_BENCH_SAMPLES 100000

typedef struct stack_unwind_validator_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} stack_unwind_validator_bench_stats_t;
