/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#ifndef STACK_UNWIND_VALIDATOR_INTERFACE_H
#define STACK_UNWIND_VALIDATOR_INTERFACE_H

#include "types.c"

typedef int (*stack_unwind_validator_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct stack_unwind_validator_vtable {
    int (*init)(stack_unwind_validator_state_t* state, const stack_unwind_validator_config_t* cfg);
    int (*execute)(stack_unwind_validator_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(stack_unwind_validator_state_t* state);
    int (*destroy)(stack_unwind_validator_state_t* state);
} stack_unwind_validator_vtable_t;

#endif /* STACK_UNWIND_VALIDATOR_INTERFACE_H */
