/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool integer_overflow_guard_is_finite(double v) {
    return isfinite(v);
}

static inline double integer_overflow_guard_clamp_range(double v, double lo, double hi) {
    if (!isfinite(v)) return 0.0;
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}
