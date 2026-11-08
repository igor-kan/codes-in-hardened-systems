/**
 * Boundary condition checking and IEEE-754 edge-case handlers for Strict Syscall Whitelist Seccomp-BPF Generator.
 * Module: sandbox_seccomp_bpf
 */

#ifndef BOUNDARY_SANDBOX_SECCOMP_BPF_H
#define BOUNDARY_SANDBOX_SECCOMP_BPF_H

#include <math.h>
#include <stdbool.h>

static inline bool sandbox_seccomp_bpf_is_finite_input(double x) {
    return isfinite(x);
}

static inline double sandbox_seccomp_bpf_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_SANDBOX_SECCOMP_BPF_H */
