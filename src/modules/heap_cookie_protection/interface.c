/**
 * @file interface.c
 * @brief Abstract function prototypes and contracts for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection | Algorithm Family: freelist_xor
 */

#ifndef HEAP_COOKIE_PROTECTION_INTERFACE_H
#define HEAP_COOKIE_PROTECTION_INTERFACE_H

#include "types.c"

typedef int (*heap_cookie_protection_kernel_fn)(const double* in_vec, double* out_vec, size_t n);

typedef struct heap_cookie_protection_vtable {
    int (*init)(heap_cookie_protection_state_t* state, const heap_cookie_protection_config_t* cfg);
    int (*execute)(heap_cookie_protection_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(heap_cookie_protection_state_t* state);
    int (*destroy)(heap_cookie_protection_state_t* state);
} heap_cookie_protection_vtable_t;

#endif /* HEAP_COOKIE_PROTECTION_INTERFACE_H */
