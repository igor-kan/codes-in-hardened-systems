/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool aslr_entropy_probe_is_valid_float(double x) {
    return isfinite(x);
}

static inline double aslr_entropy_probe_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
