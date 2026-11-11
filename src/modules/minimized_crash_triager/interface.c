/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#ifndef MINIMIZED_CRASH_TRIAGER_INTERFACE_H
#define MINIMIZED_CRASH_TRIAGER_INTERFACE_H

#include "types.c"

typedef int (*minimized_crash_triager_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct minimized_crash_triager_vtable {
    int (*init)(minimized_crash_triager_state_t* state, const minimized_crash_triager_config_t* cfg);
    int (*execute)(minimized_crash_triager_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(minimized_crash_triager_state_t* state);
    int (*destroy)(minimized_crash_triager_state_t* state);
} minimized_crash_triager_vtable_t;

#endif /* MINIMIZED_CRASH_TRIAGER_INTERFACE_H */
