/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool bpf_xdp_packet_filter_is_valid_float(double x) {
    return isfinite(x);
}

static inline double bpf_xdp_packet_filter_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
