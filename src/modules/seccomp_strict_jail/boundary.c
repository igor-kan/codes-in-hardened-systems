/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool seccomp_strict_jail_is_valid_float(double x) {
    return isfinite(x);
}

static inline double seccomp_strict_jail_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
