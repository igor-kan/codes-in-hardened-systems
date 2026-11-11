/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#ifndef BPF_LSM_FILE_MONITOR_INTERFACE_H
#define BPF_LSM_FILE_MONITOR_INTERFACE_H

#include "types.c"

typedef int (*bpf_lsm_file_monitor_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct bpf_lsm_file_monitor_vtable {
    int (*init)(bpf_lsm_file_monitor_state_t* state, const bpf_lsm_file_monitor_config_t* cfg);
    int (*execute)(bpf_lsm_file_monitor_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(bpf_lsm_file_monitor_state_t* state);
    int (*destroy)(bpf_lsm_file_monitor_state_t* state);
} bpf_lsm_file_monitor_vtable_t;

#endif /* BPF_LSM_FILE_MONITOR_INTERFACE_H */
