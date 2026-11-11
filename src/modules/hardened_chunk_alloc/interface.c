/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#ifndef HARDENED_CHUNK_ALLOC_INTERFACE_H
#define HARDENED_CHUNK_ALLOC_INTERFACE_H

#include "types.c"

typedef int (*hardened_chunk_alloc_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct hardened_chunk_alloc_vtable {
    int (*init)(hardened_chunk_alloc_state_t* state, const hardened_chunk_alloc_config_t* cfg);
    int (*execute)(hardened_chunk_alloc_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(hardened_chunk_alloc_state_t* state);
    int (*destroy)(hardened_chunk_alloc_state_t* state);
} hardened_chunk_alloc_vtable_t;

#endif /* HARDENED_CHUNK_ALLOC_INTERFACE_H */
