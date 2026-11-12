/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard | Algorithm Family: overflow_guard
 */

#ifndef INTEGER_OVERFLOW_GUARD_INTERFACE_H
#define INTEGER_OVERFLOW_GUARD_INTERFACE_H

#include "types.c"

typedef int (*integer_overflow_guard_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct integer_overflow_guard_vtable {
    int (*init)(integer_overflow_guard_state_t* state, const integer_overflow_guard_config_t* cfg);
    int (*execute)(integer_overflow_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(integer_overflow_guard_state_t* state);
    int (*destroy)(integer_overflow_guard_state_t* state);
} integer_overflow_guard_vtable_t;

#endif /* INTEGER_OVERFLOW_GUARD_INTERFACE_H */
