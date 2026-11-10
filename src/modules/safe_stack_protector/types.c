/**
 * @file types.c
 * @brief Core types and configuration for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#ifndef SAFE_STACK_PROTECTOR_TYPES_H
#define SAFE_STACK_PROTECTOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define SAFE_STACK_PROTECTOR_ALIGNMENT 64
#define SAFE_STACK_PROTECTOR_CAPACITY 4096

typedef struct safe_stack_protector_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} safe_stack_protector_config_t;

typedef struct safe_stack_protector_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    safe_stack_protector_config_t config;
} safe_stack_protector_state_t;

#endif /* SAFE_STACK_PROTECTOR_TYPES_H */
