/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened | Algorithm Family: stack_canary
 */

#ifndef STACK_CANARY_GUARD_HARDENED_INTERFACE_H
#define STACK_CANARY_GUARD_HARDENED_INTERFACE_H

#include "types.c"

typedef int (*stack_canary_guard_hardened_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct stack_canary_guard_hardened_vtable {
    int (*init)(stack_canary_guard_hardened_state_t* state, const stack_canary_guard_hardened_config_t* cfg);
    int (*execute)(stack_canary_guard_hardened_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(stack_canary_guard_hardened_state_t* state);
    int (*destroy)(stack_canary_guard_hardened_state_t* state);
} stack_canary_guard_hardened_vtable_t;

#endif /* STACK_CANARY_GUARD_HARDENED_INTERFACE_H */
