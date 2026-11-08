/**
 * Boundary condition checking and IEEE-754 edge-case handlers for Hardened Memory Allocator with Canary Protection.
 * Module: canary_guard_allocator
 */

#ifndef BOUNDARY_CANARY_GUARD_ALLOCATOR_H
#define BOUNDARY_CANARY_GUARD_ALLOCATOR_H

#include <math.h>
#include <stdbool.h>

static inline bool canary_guard_allocator_is_finite_input(double x) {
    return isfinite(x);
}

static inline double canary_guard_allocator_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_CANARY_GUARD_ALLOCATOR_H */
