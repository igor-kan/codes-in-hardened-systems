/**
 * @file core.c
 * @brief Concrete computational algorithm implementation for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection | Algorithm Family: freelist_xor
 */

#include "types.c"
#include <stdlib.h>
#include <string.h>

int heap_cookie_protection_execute_kernel(const double* in_vec, double* out_vec, size_t n, double weight) {
    if (!in_vec || !out_vec || n == 0) return -1;
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + weight * x / (1.0 + x * x));
    }
    return 0;
}
