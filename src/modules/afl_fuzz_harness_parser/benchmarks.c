/**
 * Microbenchmark harness and cycle latency profiling for LLVM-Mode LibFuzzer Target for Binary Payloads.
 * Module: afl_fuzz_harness_parser
 */

#ifndef BENCH_AFL_FUZZ_HARNESS_PARSER_H
#define BENCH_AFL_FUZZ_HARNESS_PARSER_H

#include <stdint.h>

#define BENCH_WARMUP_ITERATIONS 1000
#define BENCH_SAMPLE_ITERATIONS 100000

typedef struct afl_fuzz_harness_parser_bench_metrics {
    uint64_t total_cycles;
    uint64_t elapsed_nanoseconds;
    double throughput_elements_per_sec;
} afl_fuzz_harness_parser_bench_metrics_t;

#endif /* BENCH_AFL_FUZZ_HARNESS_PARSER_H */
