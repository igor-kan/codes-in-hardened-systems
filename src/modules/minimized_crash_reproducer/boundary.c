/**
 * Boundary condition checking and IEEE-754 edge-case handlers for Deterministic Crash Replay and Delta-Debugger.
 * Module: minimized_crash_reproducer
 */

#ifndef BOUNDARY_MINIMIZED_CRASH_REPRODUCER_H
#define BOUNDARY_MINIMIZED_CRASH_REPRODUCER_H

#include <math.h>
#include <stdbool.h>

static inline bool minimized_crash_reproducer_is_finite_input(double x) {
    return isfinite(x);
}

static inline double minimized_crash_reproducer_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_MINIMIZED_CRASH_REPRODUCER_H */
