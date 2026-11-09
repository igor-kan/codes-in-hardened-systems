/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#include <stdint.h>

#define SANDBOX_LANDLOCK_RULESET_BENCH_SAMPLES 100000

typedef struct sandbox_landlock_ruleset_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} sandbox_landlock_ruleset_bench_stats_t;
