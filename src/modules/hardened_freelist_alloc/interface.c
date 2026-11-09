/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#ifndef HARDENED_FREELIST_ALLOC_INTERFACE_H
#define HARDENED_FREELIST_ALLOC_INTERFACE_H

#include "types.c"

typedef int (*hardened_freelist_alloc_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct hardened_freelist_alloc_vtable {
    int (*init)(hardened_freelist_alloc_state_t* state, const hardened_freelist_alloc_config_t* cfg);
    int (*execute)(hardened_freelist_alloc_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(hardened_freelist_alloc_state_t* state);
} hardened_freelist_alloc_vtable_t;

#endif /* HARDENED_FREELIST_ALLOC_INTERFACE_H */
