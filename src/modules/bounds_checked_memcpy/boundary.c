/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Overlap-Aware Bounds-Checked Memory Copy with Abort.
 * Module: bounds_checked_memcpy
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool bounds_checked_memcpy_check_finite(double v) {
    return isfinite(v);
}

static inline double bounds_checked_memcpy_bound_clamp(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
