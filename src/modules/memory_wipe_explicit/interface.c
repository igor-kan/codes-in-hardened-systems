/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit | Algorithm Family: zeroize
 */

#ifndef MEMORY_WIPE_EXPLICIT_INTERFACE_H
#define MEMORY_WIPE_EXPLICIT_INTERFACE_H

#include "types.c"

typedef int (*memory_wipe_explicit_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct memory_wipe_explicit_vtable {
    int (*init)(memory_wipe_explicit_state_t* state, const memory_wipe_explicit_config_t* cfg);
    int (*execute)(memory_wipe_explicit_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(memory_wipe_explicit_state_t* state);
    int (*destroy)(memory_wipe_explicit_state_t* state);
} memory_wipe_explicit_vtable_t;

#endif /* MEMORY_WIPE_EXPLICIT_INTERFACE_H */
