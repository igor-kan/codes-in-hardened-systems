/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic | Algorithm Family: overflow_guard
 */

#ifndef INTEGER_SATURATING_ARITHMETIC_INTERFACE_H
#define INTEGER_SATURATING_ARITHMETIC_INTERFACE_H

#include "types.c"

typedef int (*integer_saturating_arithmetic_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct integer_saturating_arithmetic_vtable {
    int (*init)(integer_saturating_arithmetic_state_t* state, const integer_saturating_arithmetic_config_t* cfg);
    int (*execute)(integer_saturating_arithmetic_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(integer_saturating_arithmetic_state_t* state);
    int (*destroy)(integer_saturating_arithmetic_state_t* state);
} integer_saturating_arithmetic_vtable_t;

#endif /* INTEGER_SATURATING_ARITHMETIC_INTERFACE_H */
