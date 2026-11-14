/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Safe Memory Copy and Buffer Slicing with Bounds Check.
 * Module: bounds_checked_buffer | Algorithm Family: safe_copy
 */

#ifndef BOUNDS_CHECKED_BUFFER_INTERFACE_H
#define BOUNDS_CHECKED_BUFFER_INTERFACE_H

#include "types.c"

typedef int (*bounds_checked_buffer_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct bounds_checked_buffer_vtable {
    int (*init)(bounds_checked_buffer_state_t* state, const bounds_checked_buffer_config_t* cfg);
    int (*execute)(bounds_checked_buffer_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(bounds_checked_buffer_state_t* state);
    int (*destroy)(bounds_checked_buffer_state_t* state);
} bounds_checked_buffer_vtable_t;

#endif /* BOUNDS_CHECKED_BUFFER_INTERFACE_H */
