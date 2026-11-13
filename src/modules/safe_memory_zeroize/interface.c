/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize | Algorithm Family: zeroize
 */

#ifndef SAFE_MEMORY_ZEROIZE_INTERFACE_H
#define SAFE_MEMORY_ZEROIZE_INTERFACE_H

#include "types.c"

typedef int (*safe_memory_zeroize_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct safe_memory_zeroize_vtable {
    int (*init)(safe_memory_zeroize_state_t* state, const safe_memory_zeroize_config_t* cfg);
    int (*execute)(safe_memory_zeroize_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(safe_memory_zeroize_state_t* state);
    int (*destroy)(safe_memory_zeroize_state_t* state);
} safe_memory_zeroize_vtable_t;

#endif /* SAFE_MEMORY_ZEROIZE_INTERFACE_H */
