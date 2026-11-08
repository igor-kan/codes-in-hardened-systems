/**
 * Microbenchmark harness and cycle latency profiling for Capability-Gated Synchronous Zeroized IPC Channel.
 * Module: sanitized_ipc_channel
 */

#ifndef BENCH_SANITIZED_IPC_CHANNEL_H
#define BENCH_SANITIZED_IPC_CHANNEL_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct sanitized_ipc_channel_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} sanitized_ipc_channel_bench_metrics_t;

#endif /* BENCH_SANITIZED_IPC_CHANNEL_H */
