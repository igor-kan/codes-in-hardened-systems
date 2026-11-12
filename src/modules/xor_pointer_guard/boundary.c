/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool xor_pointer_guard_is_finite(double v) {
    return isfinite(v);
}

static inline double xor_pointer_guard_clamp_range(double v, double lo, double hi) {
    if (!isfinite(v)) return 0.0;
    if (v < lo) return lo;
    if (v > hi) return hi;
    return v;
}
