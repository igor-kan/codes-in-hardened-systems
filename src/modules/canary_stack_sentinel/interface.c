/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel | Algorithm Family: canary_guard
 */

#ifndef CANARY_STACK_SENTINEL_INTERFACE_H
#define CANARY_STACK_SENTINEL_INTERFACE_H

#include "types.c"

typedef int (*canary_stack_sentinel_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct canary_stack_sentinel_vtable {
    int (*init)(canary_stack_sentinel_state_t* state, const canary_stack_sentinel_config_t* cfg);
    int (*execute)(canary_stack_sentinel_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(canary_stack_sentinel_state_t* state);
    int (*destroy)(canary_stack_sentinel_state_t* state);
} canary_stack_sentinel_vtable_t;

#endif /* CANARY_STACK_SENTINEL_INTERFACE_H */
