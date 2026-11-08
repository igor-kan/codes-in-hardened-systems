/**
 * @file benchmarks.c
 * @brief Microbenchmark harness and cycle timing for Cryptographic Capability Token Vault for Safe IPC.
 * Module: capability_token_vault
 */

#include <stdint.h>

#define CAPABILITY_TOKEN_VAULT_BENCH_ITERATIONS 100000

typedef struct capability_token_vault_bench_result {
    uint64_t total_cycles;
    double throughput_ops_sec;
} capability_token_vault_bench_result_t;
