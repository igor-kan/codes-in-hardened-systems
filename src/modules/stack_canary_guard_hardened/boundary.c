/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool stack_canary_guard_hardened_check_finite(double v) {
    return isfinite(v);
}

static inline double stack_canary_guard_hardened_bound_clamp(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
