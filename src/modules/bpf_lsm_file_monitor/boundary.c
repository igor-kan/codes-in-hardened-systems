/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool bpf_lsm_file_monitor_is_valid_float(double x) {
    return isfinite(x);
}

static inline double bpf_lsm_file_monitor_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
