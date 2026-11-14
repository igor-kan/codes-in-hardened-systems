/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select | Algorithm Family: constant_time
 */

#ifndef CONSTANT_TIME_SELECT_INTERFACE_H
#define CONSTANT_TIME_SELECT_INTERFACE_H

#include "types.c"

typedef int (*constant_time_select_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct constant_time_select_vtable {
    int (*init)(constant_time_select_state_t* state, const constant_time_select_config_t* cfg);
    int (*execute)(constant_time_select_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(constant_time_select_state_t* state);
    int (*destroy)(constant_time_select_state_t* state);
} constant_time_select_vtable_t;

#endif /* CONSTANT_TIME_SELECT_INTERFACE_H */
