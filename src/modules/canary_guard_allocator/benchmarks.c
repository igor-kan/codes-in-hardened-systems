/**
 * Microbenchmark harness and cycle latency profiling for Hardened Memory Allocator with Canary Protection.
 * Module: canary_guard_allocator
 */

#ifndef BENCH_CANARY_GUARD_ALLOCATOR_H
#define BENCH_CANARY_GUARD_ALLOCATOR_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct canary_guard_allocator_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} canary_guard_allocator_bench_metrics_t;

#endif /* BENCH_CANARY_GUARD_ALLOCATOR_H */
