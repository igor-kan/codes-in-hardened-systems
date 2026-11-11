/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include <stdint.h>

#define BPF_LSM_FILE_MONITOR_BENCH_SAMPLES 100000

typedef struct bpf_lsm_file_monitor_bench_stats {
    uint64_t cycles;
    double throughput_ops_sec;
} bpf_lsm_file_monitor_bench_stats_t;
