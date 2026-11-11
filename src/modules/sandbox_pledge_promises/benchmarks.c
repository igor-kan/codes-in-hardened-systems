/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#include <stdint.h>

#define SANDBOX_PLEDGE_PROMISES_BENCH_SAMPLES 100000

typedef struct sandbox_pledge_promises_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} sandbox_pledge_promises_bench_stats_t;
