/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#include <stdint.h>

#define CONSTANT_TIME_CRYPTO_MEM_BENCH_SAMPLES 100000

typedef struct constant_time_crypto_mem_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} constant_time_crypto_mem_bench_stats_t;
