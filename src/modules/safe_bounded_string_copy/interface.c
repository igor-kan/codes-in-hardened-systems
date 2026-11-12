/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy | Algorithm Family: safe_string
 */

#ifndef SAFE_BOUNDED_STRING_COPY_INTERFACE_H
#define SAFE_BOUNDED_STRING_COPY_INTERFACE_H

#include "types.c"

typedef int (*safe_bounded_string_copy_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct safe_bounded_string_copy_vtable {
    int (*init)(safe_bounded_string_copy_state_t* state, const safe_bounded_string_copy_config_t* cfg);
    int (*execute)(safe_bounded_string_copy_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(safe_bounded_string_copy_state_t* state);
    int (*destroy)(safe_bounded_string_copy_state_t* state);
} safe_bounded_string_copy_vtable_t;

#endif /* SAFE_BOUNDED_STRING_COPY_INTERFACE_H */
