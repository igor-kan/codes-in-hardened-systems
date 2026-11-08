/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#ifndef MEMORY_POISON_ALLOCATOR_INTERFACE_H
#define MEMORY_POISON_ALLOCATOR_INTERFACE_H

#include "types.c"

typedef int (*memory_poison_allocator_transform_fn)(const double* in_data, double* out_data, size_t n);

typedef struct memory_poison_allocator_interface {
    int (*init)(memory_poison_allocator_state_t* state, const memory_poison_allocator_config_t* cfg);
    int (*execute)(memory_poison_allocator_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(memory_poison_allocator_state_t* state);
    int (*destroy)(memory_poison_allocator_state_t* state);
} memory_poison_allocator_interface_t;

#endif /* MEMORY_POISON_ALLOCATOR_INTERFACE_H */
