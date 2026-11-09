/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Software Shadow Stack Return Address Guard.
 * Module: shadow_stack_guard
 */

#ifndef SHADOW_STACK_GUARD_INTERFACE_H
#define SHADOW_STACK_GUARD_INTERFACE_H

#include "types.c"

typedef int (*shadow_stack_guard_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct shadow_stack_guard_vtable {
    int (*init)(shadow_stack_guard_state_t* state, const shadow_stack_guard_config_t* cfg);
    int (*execute)(shadow_stack_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(shadow_stack_guard_state_t* state);
} shadow_stack_guard_vtable_t;

#endif /* SHADOW_STACK_GUARD_INTERFACE_H */
