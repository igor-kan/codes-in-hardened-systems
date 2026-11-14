/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel | Algorithm Family: stack_canary
 */

#ifndef STACK_COOKIE_SENTINEL_INTERFACE_H
#define STACK_COOKIE_SENTINEL_INTERFACE_H

#include "types.c"

typedef int (*stack_cookie_sentinel_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct stack_cookie_sentinel_vtable {
    int (*init)(stack_cookie_sentinel_state_t* state, const stack_cookie_sentinel_config_t* cfg);
    int (*execute)(stack_cookie_sentinel_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(stack_cookie_sentinel_state_t* state);
    int (*destroy)(stack_cookie_sentinel_state_t* state);
} stack_cookie_sentinel_vtable_t;

#endif /* STACK_COOKIE_SENTINEL_INTERFACE_H */
