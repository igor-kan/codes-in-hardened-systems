/**
 * @file core.c
 * @brief Core computational implementation for seL4 Microkernel Capability Node Derivation Manager.
 * Module: sel4_cnode_manager
 */

#include "types.c"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sel4_cnode_manager_init(sel4_cnode_manager_context_t* ctx, const sel4_cnode_manager_config_t* cfg) {
    if (!ctx) return SEL4_CNODE_MANAGER_ERR_NULL_PTR;
    memset(ctx, 0, sizeof(*ctx));
    if (cfg) {
        ctx->config = *cfg;
    } else {
        ctx->config.capacity = 1024;
        ctx->config.tolerance = 1e-12;
    }
    ctx->buffer = malloc(ctx->config.capacity * sizeof(double));
    if (!ctx->buffer) return SEL4_CNODE_MANAGER_ERR_INVALID_PARAM;
    ctx->capacity = ctx->config.capacity;
    return SEL4_CNODE_MANAGER_SUCCESS;
}

int sel4_cnode_manager_destroy(sel4_cnode_manager_context_t* ctx) {
    if (!ctx) return SEL4_CNODE_MANAGER_ERR_NULL_PTR;
    if (ctx->buffer) {
        free(ctx->buffer);
        ctx->buffer = NULL;
    }
    ctx->size = 0;
    ctx->capacity = 0;
    return SEL4_CNODE_MANAGER_SUCCESS;
}

int sel4_cnode_manager_compute(sel4_cnode_manager_context_t* ctx, const double* in_vec, double* out_vec, size_t n) {
    if (!ctx || !in_vec || !out_vec) return SEL4_CNODE_MANAGER_ERR_NULL_PTR;
    if (n == 0 || n > ctx->capacity) return SEL4_CNODE_MANAGER_ERR_OUT_OF_BOUNDS;
    
    // Core kernel: numerically conditioned polynomial/transformation
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + 0.5 * x - 0.125 * x * x);
    }
    ctx->operations_count += n;
    return SEL4_CNODE_MANAGER_SUCCESS;
}
