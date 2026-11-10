/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#ifndef SECCOMP_STRICT_JAIL_INTERFACE_H
#define SECCOMP_STRICT_JAIL_INTERFACE_H

#include "types.c"

typedef int (*seccomp_strict_jail_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct seccomp_strict_jail_vtable {
    int (*init)(seccomp_strict_jail_state_t* state, const seccomp_strict_jail_config_t* cfg);
    int (*execute)(seccomp_strict_jail_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(seccomp_strict_jail_state_t* state);
    int (*destroy)(seccomp_strict_jail_state_t* state);
} seccomp_strict_jail_vtable_t;

#endif /* SECCOMP_STRICT_JAIL_INTERFACE_H */
