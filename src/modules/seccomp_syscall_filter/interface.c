/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#ifndef SECCOMP_SYSCALL_FILTER_INTERFACE_H
#define SECCOMP_SYSCALL_FILTER_INTERFACE_H

#include "types.c"

typedef int (*seccomp_syscall_filter_transform_fn)(const double* in_data, double* out_data, size_t n);

typedef struct seccomp_syscall_filter_interface {
    int (*init)(seccomp_syscall_filter_state_t* state, const seccomp_syscall_filter_config_t* cfg);
    int (*execute)(seccomp_syscall_filter_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(seccomp_syscall_filter_state_t* state);
    int (*destroy)(seccomp_syscall_filter_state_t* state);
} seccomp_syscall_filter_interface_t;

#endif /* SECCOMP_SYSCALL_FILTER_INTERFACE_H */
