/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Software Shadow Stack Return Address Guard.
 * Module: shadow_stack_guard
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool shadow_stack_guard_is_valid_float(double x) {
    return isfinite(x);
}

static inline double shadow_stack_guard_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
