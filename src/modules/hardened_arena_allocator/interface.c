/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

#ifndef HARDENED_ARENA_ALLOCATOR_INTERFACE_H
#define HARDENED_ARENA_ALLOCATOR_INTERFACE_H

#include "types.c"

typedef int (*hardened_arena_allocator_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct hardened_arena_allocator_vtable {
    int (*init)(hardened_arena_allocator_state_t* state, const hardened_arena_allocator_config_t* cfg);
    int (*execute)(hardened_arena_allocator_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(hardened_arena_allocator_state_t* state);
    int (*destroy)(hardened_arena_allocator_state_t* state);
} hardened_arena_allocator_vtable_t;

#endif /* HARDENED_ARENA_ALLOCATOR_INTERFACE_H */
