/**
 * @file types.c
 * @brief Core types and configuration for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#ifndef CFI_RETURN_ADDRESS_GUARD_TYPES_H
#define CFI_RETURN_ADDRESS_GUARD_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define CFI_RETURN_ADDRESS_GUARD_ALIGNMENT 64
#define CFI_RETURN_ADDRESS_GUARD_DEFAULT_SZ 8192

typedef struct cfi_return_address_guard_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} cfi_return_address_guard_config_t;

typedef struct cfi_return_address_guard_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    cfi_return_address_guard_config_t config;
} cfi_return_address_guard_state_t;

#endif /* CFI_RETURN_ADDRESS_GUARD_TYPES_H */
