/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

#include <stdint.h>

#define SECURE_PAGE_ZEROIZER_BENCH_SAMPLES 100000

typedef struct secure_page_zeroizer_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} secure_page_zeroizer_bench_stats_t;
