/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

#include <stdint.h>

#define CANARY_STACK_SENTINEL_BENCH_CYCLES 100000

typedef struct canary_stack_sentinel_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} canary_stack_sentinel_profile_results_t;
