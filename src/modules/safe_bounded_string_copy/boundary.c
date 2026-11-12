/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool safe_bounded_string_copy_is_finite(double v) {
    return isfinite(v);
}

static inline double safe_bounded_string_copy_clamp_range(double v, double lo, double hi) {
    if (!isfinite(v)) return 0.0;
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}
