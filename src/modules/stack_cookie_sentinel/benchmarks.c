/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

#include <stdint.h>

#define STACK_COOKIE_SENTINEL_BENCH_ITERATIONS 100000

typedef struct stack_cookie_sentinel_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} stack_cookie_sentinel_bench_metrics_t;
