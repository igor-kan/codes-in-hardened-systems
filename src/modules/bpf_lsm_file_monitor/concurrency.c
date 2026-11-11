/**
 * @file concurrency.c
 * @brief Thread safety and reentrancy model for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include <stdint.h>
#include <stdbool.h>

typedef struct bpf_lsm_file_monitor_sync_counter {
    volatile uint64_t count;
} bpf_lsm_file_monitor_sync_counter_t;

static inline void bpf_lsm_file_monitor_sync_inc_v47(bpf_lsm_file_monitor_sync_counter_t* c) {
    __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
}
