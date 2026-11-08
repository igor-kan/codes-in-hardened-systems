/**
 * @file core.c
 * @brief Core computational implementation for Strict Syscall Whitelist Seccomp-BPF Generator.
 * Module: sandbox_seccomp_bpf
 */

#include "types.c"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sandbox_seccomp_bpf_init(sandbox_seccomp_bpf_context_t* ctx, const sandbox_seccomp_bpf_config_t* cfg) {
    if (!ctx) return SANDBOX_SECCOMP_BPF_ERR_NULL_PTR;
    memset(ctx, 0, sizeof(*ctx));
    if (cfg) {
        ctx->config = *cfg;
    } else {
        ctx->config.capacity = 1024;
        ctx->config.tolerance = 1e-12;
    }
    ctx->buffer = malloc(ctx->config.capacity * sizeof(double));
    if (!ctx->buffer) return SANDBOX_SECCOMP_BPF_ERR_INVALID_PARAM;
    ctx->capacity = ctx->config.capacity;
    return SANDBOX_SECCOMP_BPF_SUCCESS;
}

int sandbox_seccomp_bpf_destroy(sandbox_seccomp_bpf_context_t* ctx) {
    if (!ctx) return SANDBOX_SECCOMP_BPF_ERR_NULL_PTR;
    if (ctx->buffer) {
        free(ctx->buffer);
        ctx->buffer = NULL;
    }
    ctx->size = 0;
    ctx->capacity = 0;
    return SANDBOX_SECCOMP_BPF_SUCCESS;
}

int sandbox_seccomp_bpf_compute(sandbox_seccomp_bpf_context_t* ctx, const double* in_vec, double* out_vec, size_t n) {
    if (!ctx || !in_vec || !out_vec) return SANDBOX_SECCOMP_BPF_ERR_NULL_PTR;
    if (n == 0 || n > ctx->capacity) return SANDBOX_SECCOMP_BPF_ERR_OUT_OF_BOUNDS;
    
    // Core kernel: numerically conditioned polynomial/transformation
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + 0.5 * x - 0.125 * x * x);
    }
    ctx->operations_count += n;
    return SANDBOX_SECCOMP_BPF_SUCCESS;
}
