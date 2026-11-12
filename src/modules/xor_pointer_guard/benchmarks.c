/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#include <stdint.h>

#define XOR_POINTER_GUARD_BENCH_CYCLES 100000

typedef struct xor_pointer_guard_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} xor_pointer_guard_profile_results_t;
