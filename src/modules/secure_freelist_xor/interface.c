/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor | Algorithm Family: freelist_xor
 */

#ifndef SECURE_FREELIST_XOR_INTERFACE_H
#define SECURE_FREELIST_XOR_INTERFACE_H

#include "types.c"

typedef int (*secure_freelist_xor_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct secure_freelist_xor_vtable {
    int (*init)(secure_freelist_xor_state_t* state, const secure_freelist_xor_config_t* cfg);
    int (*execute)(secure_freelist_xor_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(secure_freelist_xor_state_t* state);
    int (*destroy)(secure_freelist_xor_state_t* state);
} secure_freelist_xor_vtable_t;

#endif /* SECURE_FREELIST_XOR_INTERFACE_H */
