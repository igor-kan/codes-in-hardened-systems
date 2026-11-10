/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#ifndef SAFE_STACK_PROTECTOR_INTERFACE_H
#define SAFE_STACK_PROTECTOR_INTERFACE_H

#include "types.c"

typedef int (*safe_stack_protector_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct safe_stack_protector_vtable {
    int (*init)(safe_stack_protector_state_t* state, const safe_stack_protector_config_t* cfg);
    int (*execute)(safe_stack_protector_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(safe_stack_protector_state_t* state);
    int (*destroy)(safe_stack_protector_state_t* state);
} safe_stack_protector_vtable_t;

#endif /* SAFE_STACK_PROTECTOR_INTERFACE_H */
