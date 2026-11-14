/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

#include <stdint.h>

#define HEAP_COOKIE_PROTECTION_BENCH_ITERATIONS 100000

typedef struct heap_cookie_protection_bench_metrics {
    uint64_t tsc_cycles;
    double ops_per_sec;
} heap_cookie_protection_bench_metrics_t;
