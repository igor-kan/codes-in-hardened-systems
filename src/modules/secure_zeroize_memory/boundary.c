/**
 * @file boundary.c
 * @brief Boundary validation and exceptional input guarding for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool secure_zeroize_memory_is_valid_float(double x) {
    return isfinite(x);
}

static inline double secure_zeroize_memory_clamp_input(double x, double min_val, double max_val) {
    if (!isfinite(x)) return 0.0;
    if (x < min_val) return min_val;
    if (x > max_val) return max_val;
    return x;
}
