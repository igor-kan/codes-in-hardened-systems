/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#ifndef MEMORY_GUARD_PAGES_INTERFACE_H
#define MEMORY_GUARD_PAGES_INTERFACE_H

#include "types.c"

typedef int (*memory_guard_pages_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct memory_guard_pages_vtable {
    int (*init)(memory_guard_pages_state_t* state, const memory_guard_pages_config_t* cfg);
    int (*execute)(memory_guard_pages_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(memory_guard_pages_state_t* state);
} memory_guard_pages_vtable_t;

#endif /* MEMORY_GUARD_PAGES_INTERFACE_H */
