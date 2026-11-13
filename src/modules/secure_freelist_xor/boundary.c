/**
 * @file boundary.c
 * @brief Boundary validation, clamping, and edge-case guards for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

#include "types.c"
#include <math.h>
#include <stdbool.h>

static inline bool secure_freelist_xor_check_finite(double v) {
    return isfinite(v);
}

static inline double secure_freelist_xor_bound_clamp(double v, double min_v, double max_v) {
    if (!isfinite(v)) return 0.0;
    if (v < min_v) return min_v;
    if (v > max_v) return max_v;
    return v;
}
