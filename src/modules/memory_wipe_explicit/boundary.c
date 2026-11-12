/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool memory_wipe_explicit_is_finite(double v) {
    return isfinite(v);
}

static inline double memory_wipe_explicit_clamp_range(double v, double lo, double hi) {
    if (!isfinite(v)) return 0.0;
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}
