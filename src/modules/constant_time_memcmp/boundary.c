/**
 * Boundary condition checking and IEEE-754 edge-case handlers for Side-Channel Immune Constant-Time Memory Comparison.
 * Module: constant_time_memcmp
 */

#ifndef BOUNDARY_CONSTANT_TIME_MEMCMP_H
#define BOUNDARY_CONSTANT_TIME_MEMCMP_H

#include <math.h>
#include <stdbool.h>

static inline bool constant_time_memcmp_is_finite_input(double x) {
    return isfinite(x);
}

static inline double constant_time_memcmp_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_CONSTANT_TIME_MEMCMP_H */
