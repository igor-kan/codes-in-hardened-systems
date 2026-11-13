/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool safe_memory_zeroize_check_finite(double v) {
    return isfinite(v);
}

static inline double safe_memory_zeroize_bound_clamp(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
