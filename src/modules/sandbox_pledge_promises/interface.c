/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#ifndef SANDBOX_PLEDGE_PROMISES_INTERFACE_H
#define SANDBOX_PLEDGE_PROMISES_INTERFACE_H

#include "types.c"

typedef int (*sandbox_pledge_promises_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct sandbox_pledge_promises_vtable {
    int (*init)(sandbox_pledge_promises_state_t* state, const sandbox_pledge_promises_config_t* cfg);
    int (*execute)(sandbox_pledge_promises_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(sandbox_pledge_promises_state_t* state);
    int (*destroy)(sandbox_pledge_promises_state_t* state);
} sandbox_pledge_promises_vtable_t;

#endif /* SANDBOX_PLEDGE_PROMISES_INTERFACE_H */
