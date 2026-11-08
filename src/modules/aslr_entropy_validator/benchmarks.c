/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#include <stdint.h>

#define ASLR_ENTROPY_VALIDATOR_BENCH_ITERATIONS 100000

typedef struct aslr_entropy_validator_bench_result {
    uint64_t total_cycles;
    double throughput_ops_sec;
} aslr_entropy_validator_bench_result_t;
