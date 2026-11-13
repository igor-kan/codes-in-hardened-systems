/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#include <stdint.h>

#define STACK_CANARY_GUARD_HARDENED_BENCH_ITERATIONS 100000

typedef struct stack_canary_guard_hardened_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} stack_canary_guard_hardened_bench_metrics_t;
