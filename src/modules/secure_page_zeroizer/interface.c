/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

#ifndef SECURE_PAGE_ZEROIZER_INTERFACE_H
#define SECURE_PAGE_ZEROIZER_INTERFACE_H

#include "types.c"

typedef int (*secure_page_zeroizer_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct secure_page_zeroizer_vtable {
    int (*init)(secure_page_zeroizer_state_t* state, const secure_page_zeroizer_config_t* cfg);
    int (*execute)(secure_page_zeroizer_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(secure_page_zeroizer_state_t* state);
    int (*destroy)(secure_page_zeroizer_state_t* state);
} secure_page_zeroizer_vtable_t;

#endif /* SECURE_PAGE_ZEROIZER_INTERFACE_H */
