/**
 * Boundary condition checking and IEEE-754 edge-case handlers for In-Kernel eBPF Packet Inspection and Memory Verifier.
 * Module: bpf_filter_verifier
 */

#ifndef BOUNDARY_BPF_FILTER_VERIFIER_H
#define BOUNDARY_BPF_FILTER_VERIFIER_H

#include <math.h>
#include <stdbool.h>

static inline bool bpf_filter_verifier_is_finite_input(double x) {
    return isfinite(x);
}

static inline double bpf_filter_verifier_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_BPF_FILTER_VERIFIER_H */
