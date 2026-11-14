/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool integer_saturating_arithmetic_is_finite_val(double v) {
    return isfinite(v);
}

static inline double integer_saturating_arithmetic_clamp_val(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
