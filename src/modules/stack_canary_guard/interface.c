/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

#ifndef STACK_CANARY_GUARD_INTERFACE_H
#define STACK_CANARY_GUARD_INTERFACE_H

#include "types.c"

typedef int (*stack_canary_guard_transform_fn)(const double* in_data, double* out_data, size_t n);

typedef struct stack_canary_guard_interface {
    int (*init)(stack_canary_guard_state_t* state, const stack_canary_guard_config_t* cfg);
    int (*execute)(stack_canary_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(stack_canary_guard_state_t* state);
    int (*destroy)(stack_canary_guard_state_t* state);
} stack_canary_guard_interface_t;

#endif /* STACK_CANARY_GUARD_INTERFACE_H */
