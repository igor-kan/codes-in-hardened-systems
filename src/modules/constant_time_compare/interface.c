/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare | Algorithm Family: constant_time
 */

#ifndef CONSTANT_TIME_COMPARE_INTERFACE_H
#define CONSTANT_TIME_COMPARE_INTERFACE_H

#include "types.c"

typedef int (*constant_time_compare_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct constant_time_compare_vtable {
    int (*init)(constant_time_compare_state_t* state, const constant_time_compare_config_t* cfg);
    int (*execute)(constant_time_compare_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(constant_time_compare_state_t* state);
    int (*destroy)(constant_time_compare_state_t* state);
} constant_time_compare_vtable_t;

#endif /* CONSTANT_TIME_COMPARE_INTERFACE_H */
