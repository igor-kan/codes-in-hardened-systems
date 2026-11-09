/**
 * @file types.c
 * @brief Core types and configuration for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#ifndef CFI_INDIRECT_CALL_CHECK_TYPES_H
#define CFI_INDIRECT_CALL_CHECK_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CFI_INDIRECT_CALL_CHECK_ALIGNMENT 64
#define CFI_INDIRECT_CALL_CHECK_CAPACITY 2048

typedef struct cfi_indirect_call_check_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} cfi_indirect_call_check_config_t;

typedef struct cfi_indirect_call_check_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    cfi_indirect_call_check_config_t config;
} cfi_indirect_call_check_state_t;

#endif /* CFI_INDIRECT_CALL_CHECK_TYPES_H */
