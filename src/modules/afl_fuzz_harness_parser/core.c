/**
 * @file core.c
 * @brief Core computational implementation for LLVM-Mode LibFuzzer Target for Binary Payloads.
 * Module: afl_fuzz_harness_parser
 */

#include "types.c"
#include <stdlib.h>
#include <string.h>
#include <math.h>

int afl_fuzz_harness_parser_init(afl_fuzz_harness_parser_context_t* ctx, const afl_fuzz_harness_parser_config_t* cfg) {
    if (!ctx) return AFL_FUZZ_HARNESS_PARSER_ERR_NULL_PTR;
    memset(ctx, 0, sizeof(*ctx));
    if (cfg) {
        ctx->config = *cfg;
    } else {
        ctx->config.capacity = 1024;
        ctx->config.tolerance = 1e-12;
    }
    ctx->buffer = malloc(ctx->config.capacity * sizeof(double));
    if (!ctx->buffer) return AFL_FUZZ_HARNESS_PARSER_ERR_INVALID_PARAM;
    ctx->capacity = ctx->config.capacity;
    return AFL_FUZZ_HARNESS_PARSER_SUCCESS;
}

int afl_fuzz_harness_parser_destroy(afl_fuzz_harness_parser_context_t* ctx) {
    if (!ctx) return AFL_FUZZ_HARNESS_PARSER_ERR_NULL_PTR;
    if (ctx->buffer) {
        free(ctx->buffer);
        ctx->buffer = NULL;
    }
    ctx->size = 0;
    ctx->capacity = 0;
    return AFL_FUZZ_HARNESS_PARSER_SUCCESS;
}

int afl_fuzz_harness_parser_compute(afl_fuzz_harness_parser_context_t* ctx, const double* in_vec, double* out_vec, size_t n) {
    if (!ctx || !in_vec || !out_vec) return AFL_FUZZ_HARNESS_PARSER_ERR_NULL_PTR;
    if (n == 0 || n > ctx->capacity) return AFL_FUZZ_HARNESS_PARSER_ERR_OUT_OF_BOUNDS;
    
    // Core kernel: numerically conditioned polynomial/transformation
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + 0.5 * x - 0.125 * x * x);
    }
    ctx->operations_count += n;
    return AFL_FUZZ_HARNESS_PARSER_SUCCESS;
}
