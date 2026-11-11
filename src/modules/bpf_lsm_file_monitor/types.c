/**
 * @file types.c
 * @brief Core types and configuration for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#ifndef BPF_LSM_FILE_MONITOR_TYPES_H
#define BPF_LSM_FILE_MONITOR_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define BPF_LSM_FILE_MONITOR_ALIGNMENT 64
#define BPF_LSM_FILE_MONITOR_DEFAULT_SZ 8192

typedef struct bpf_lsm_file_monitor_config {
    size_t capacity;
    double tolerance;
    uint32_t flags;
} bpf_lsm_file_monitor_config_t;

typedef struct bpf_lsm_file_monitor_state {
    void* buffer;
    size_t count;
    uint64_t cycles;
    bpf_lsm_file_monitor_config_t config;
} bpf_lsm_file_monitor_state_t;

#endif /* BPF_LSM_FILE_MONITOR_TYPES_H */
