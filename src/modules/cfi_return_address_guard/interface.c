/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#ifndef CFI_RETURN_ADDRESS_GUARD_INTERFACE_H
#define CFI_RETURN_ADDRESS_GUARD_INTERFACE_H

#include "types.c"

typedef int (*cfi_return_address_guard_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct cfi_return_address_guard_vtable {
    int (*init)(cfi_return_address_guard_state_t* state, const cfi_return_address_guard_config_t* cfg);
    int (*execute)(cfi_return_address_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(cfi_return_address_guard_state_t* state);
    int (*destroy)(cfi_return_address_guard_state_t* state);
} cfi_return_address_guard_vtable_t;

#endif /* CFI_RETURN_ADDRESS_GUARD_INTERFACE_H */
