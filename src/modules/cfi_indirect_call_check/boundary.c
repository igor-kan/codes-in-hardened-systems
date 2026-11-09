/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool cfi_indirect_call_check_is_valid_float(double x) {
    return isfinite(x);
}

static inline double cfi_indirect_call_check_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
