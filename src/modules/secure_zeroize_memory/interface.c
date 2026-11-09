/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#ifndef SECURE_ZEROIZE_MEMORY_INTERFACE_H
#define SECURE_ZEROIZE_MEMORY_INTERFACE_H

#include "types.c"

typedef int (*secure_zeroize_memory_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct secure_zeroize_memory_vtable {
    int (*init)(secure_zeroize_memory_state_t* state, const secure_zeroize_memory_config_t* cfg);
    int (*execute)(secure_zeroize_memory_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(secure_zeroize_memory_state_t* state);
} secure_zeroize_memory_vtable_t;

#endif /* SECURE_ZEROIZE_MEMORY_INTERFACE_H */
