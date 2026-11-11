/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#include <stdint.h>

#define CFI_RETURN_ADDRESS_GUARD_BENCH_SAMPLES 100000

typedef struct cfi_return_address_guard_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} cfi_return_address_guard_bench_stats_t;
