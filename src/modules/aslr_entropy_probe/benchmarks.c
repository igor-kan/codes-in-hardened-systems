/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#include <stdint.h>

#define ASLR_ENTROPY_PROBE_BENCH_SAMPLES 100000

typedef struct aslr_entropy_probe_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} aslr_entropy_probe_bench_stats_t;
