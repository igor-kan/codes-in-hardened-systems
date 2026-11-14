/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub | Algorithm Family: zeroize
 */

#ifndef EXPLICIT_MEMORY_SCRUB_INTERFACE_H
#define EXPLICIT_MEMORY_SCRUB_INTERFACE_H

#include "types.c"

typedef int (*explicit_memory_scrub_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct explicit_memory_scrub_vtable {
    int (*init)(explicit_memory_scrub_state_t* state, const explicit_memory_scrub_config_t* cfg);
    int (*execute)(explicit_memory_scrub_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(explicit_memory_scrub_state_t* state);
    int (*destroy)(explicit_memory_scrub_state_t* state);
} explicit_memory_scrub_vtable_t;

#endif /* EXPLICIT_MEMORY_SCRUB_INTERFACE_H */
