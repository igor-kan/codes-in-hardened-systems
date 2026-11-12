/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard | Algorithm Family: xor_cookie
 */

#ifndef XOR_POINTER_GUARD_INTERFACE_H
#define XOR_POINTER_GUARD_INTERFACE_H

#include "types.c"

typedef int (*xor_pointer_guard_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct xor_pointer_guard_vtable {
    int (*init)(xor_pointer_guard_state_t* state, const xor_pointer_guard_config_t* cfg);
    int (*execute)(xor_pointer_guard_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(xor_pointer_guard_state_t* state);
    int (*destroy)(xor_pointer_guard_state_t* state);
} xor_pointer_guard_vtable_t;

#endif /* XOR_POINTER_GUARD_INTERFACE_H */
