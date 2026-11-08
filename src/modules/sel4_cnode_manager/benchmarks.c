/**
 * Microbenchmark harness and cycle latency profiling for seL4 Microkernel Capability Node Derivation Manager.
 * Module: sel4_cnode_manager
 */

#ifndef BENCH_SEL4_CNODE_MANAGER_H
#define BENCH_SEL4_CNODE_MANAGER_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct sel4_cnode_manager_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} sel4_cnode_manager_bench_metrics_t;

#endif /* BENCH_SEL4_CNODE_MANAGER_H */
