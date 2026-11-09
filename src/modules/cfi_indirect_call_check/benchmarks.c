/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#include <stdint.h>

#define CFI_INDIRECT_CALL_CHECK_BENCH_SAMPLES 100000

typedef struct cfi_indirect_call_check_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} cfi_indirect_call_check_bench_stats_t;
