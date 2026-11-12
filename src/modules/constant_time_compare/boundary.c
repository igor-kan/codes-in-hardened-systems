/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool constant_time_compare_is_finite(double v) {
    return isfinite(v);
}

static inline double constant_time_compare_clamp_range(double v, double lo, double hi) {
    if (!isfinite(v)) return 0.0;
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}
