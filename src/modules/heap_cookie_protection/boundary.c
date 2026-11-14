/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool heap_cookie_protection_is_finite_val(double v) {
    return isfinite(v);
}

static inline double heap_cookie_protection_clamp_val(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
