/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#ifndef CFI_INDIRECT_CALL_CHECK_INTERFACE_H
#define CFI_INDIRECT_CALL_CHECK_INTERFACE_H

#include "types.c"

typedef int (*cfi_indirect_call_check_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct cfi_indirect_call_check_vtable {
    int (*init)(cfi_indirect_call_check_state_t* state, const cfi_indirect_call_check_config_t* cfg);
    int (*execute)(cfi_indirect_call_check_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(cfi_indirect_call_check_state_t* state);
} cfi_indirect_call_check_vtable_t;

#endif /* CFI_INDIRECT_CALL_CHECK_INTERFACE_H */
