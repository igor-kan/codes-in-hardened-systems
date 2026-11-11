/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool minimized_crash_triager_is_valid_float(double x) {
    return isfinite(x);
}

static inline double minimized_crash_triager_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
