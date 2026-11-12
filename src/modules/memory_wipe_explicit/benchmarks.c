/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and latency profiling for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

#include <stdint.h>

#define MEMORY_WIPE_EXPLICIT_BENCH_CYCLES 100000

typedef struct memory_wipe_explicit_profile_results {
    uint64_t start_tsc;
    uint64_t end_tsc;
    double ops_per_second;
} memory_wipe_explicit_profile_results_t;
