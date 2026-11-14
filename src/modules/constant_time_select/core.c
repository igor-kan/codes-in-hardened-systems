/**
 * @file core.c
 * @brief Concrete computational algorithm implementation for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select | Algorithm Family: constant_time
 */

#include "types.c"
#include <stdlib.h>
#include <string.h>

int constant_time_select_execute_kernel(const double* in_vec, double* out_vec, size_t n, double weight) {
    if (!in_vec || !out_vec || n == 0) return -1;
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + weight * x / (1.0 + x * x));
    }
    return 0;
}
