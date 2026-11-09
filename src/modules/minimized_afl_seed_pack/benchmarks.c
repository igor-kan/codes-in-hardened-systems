/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#include <stdint.h>

#define MINIMIZED_AFL_SEED_PACK_BENCH_SAMPLES 100000

typedef struct minimized_afl_seed_pack_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} minimized_afl_seed_pack_bench_stats_t;
