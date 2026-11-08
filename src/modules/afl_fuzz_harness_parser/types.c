/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for LLVM-Mode LibFuzzer Target for Binary Payloads.
 * Module: afl_fuzz_harness_parser
 */

#ifndef AFL_FUZZ_HARNESS_PARSER_TYPES_H
#define AFL_FUZZ_HARNESS_PARSER_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define AFL_FUZZ_HARNESS_PARSER_ALIGNMENT 64
#define AFL_FUZZ_HARNESS_PARSER_SUCCESS 0
#define AFL_FUZZ_HARNESS_PARSER_ERR_NULL_PTR -1
#define AFL_FUZZ_HARNESS_PARSER_ERR_INVALID_PARAM -2
#define AFL_FUZZ_HARNESS_PARSER_ERR_OUT_OF_BOUNDS -3

typedef struct afl_fuzz_harness_parser_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} afl_fuzz_harness_parser_config_t;

typedef struct afl_fuzz_harness_parser_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    afl_fuzz_harness_parser_config_t config;
} afl_fuzz_harness_parser_context_t;

int afl_fuzz_harness_parser_init(afl_fuzz_harness_parser_context_t* ctx, const afl_fuzz_harness_parser_config_t* cfg);
int afl_fuzz_harness_parser_destroy(afl_fuzz_harness_parser_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* AFL_FUZZ_HARNESS_PARSER_TYPES_H */
