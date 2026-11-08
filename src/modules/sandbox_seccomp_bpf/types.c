/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for Strict Syscall Whitelist Seccomp-BPF Generator.
 * Module: sandbox_seccomp_bpf
 */

#ifndef SANDBOX_SECCOMP_BPF_TYPES_H
#define SANDBOX_SECCOMP_BPF_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SANDBOX_SECCOMP_BPF_ALIGNMENT 64
#define SANDBOX_SECCOMP_BPF_SUCCESS 0
#define SANDBOX_SECCOMP_BPF_ERR_NULL_PTR -1
#define SANDBOX_SECCOMP_BPF_ERR_INVALID_PARAM -2
#define SANDBOX_SECCOMP_BPF_ERR_OUT_OF_BOUNDS -3

typedef struct sandbox_seccomp_bpf_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} sandbox_seccomp_bpf_config_t;

typedef struct sandbox_seccomp_bpf_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    sandbox_seccomp_bpf_config_t config;
} sandbox_seccomp_bpf_context_t;

int sandbox_seccomp_bpf_init(sandbox_seccomp_bpf_context_t* ctx, const sandbox_seccomp_bpf_config_t* cfg);
int sandbox_seccomp_bpf_destroy(sandbox_seccomp_bpf_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* SANDBOX_SECCOMP_BPF_TYPES_H */
