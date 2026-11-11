/**
 * @file types.c
 * @brief Core types and configuration for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#ifndef STACK_UNWIND_VALIDATOR_TYPES_H
#define STACK_UNWIND_VALIDATOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define STACK_UNWIND_VALIDATOR_ALIGNMENT 64
#define STACK_UNWIND_VALIDATOR_DEFAULT_SZ 8192

typedef struct stack_unwind_validator_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} stack_unwind_validator_config_t;

typedef struct stack_unwind_validator_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    stack_unwind_validator_config_t config;
} stack_unwind_validator_state_t;

#endif /* STACK_UNWIND_VALIDATOR_TYPES_H */
