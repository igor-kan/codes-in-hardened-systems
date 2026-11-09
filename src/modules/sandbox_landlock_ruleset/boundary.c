/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool sandbox_landlock_ruleset_is_valid_float(double x) {
    return isfinite(x);
}

static inline double sandbox_landlock_ruleset_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
