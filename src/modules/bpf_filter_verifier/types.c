/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for In-Kernel eBPF Packet Inspection and Memory Verifier.
 * Module: bpf_filter_verifier
 */

#ifndef BPF_FILTER_VERIFIER_TYPES_H
#define BPF_FILTER_VERIFIER_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define BPF_FILTER_VERIFIER_ALIGNMENT 64
#define BPF_FILTER_VERIFIER_SUCCESS 0
#define BPF_FILTER_VERIFIER_ERR_NULL_PTR -1
#define BPF_FILTER_VERIFIER_ERR_INVALID_PARAM -2
#define BPF_FILTER_VERIFIER_ERR_OUT_OF_BOUNDS -3

typedef struct bpf_filter_verifier_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} bpf_filter_verifier_config_t;

typedef struct bpf_filter_verifier_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    bpf_filter_verifier_config_t config;
} bpf_filter_verifier_context_t;

int bpf_filter_verifier_init(bpf_filter_verifier_context_t* ctx, const bpf_filter_verifier_config_t* cfg);
int bpf_filter_verifier_destroy(bpf_filter_verifier_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* BPF_FILTER_VERIFIER_TYPES_H */
