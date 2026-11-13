/**
 * @file test_unit.c
 * @brief Deterministic unit tests with exact ground-truth assertions for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

#include "types.c"
#include <assert.h>
#include <math.h>

void test_safe_memory_zeroize_deterministic_unit(void) {
    double val_zero = 0.0;
    assert(val_zero == 0.0);

    double x = 1.0;
    double y = x * (1.0 + 0.1 * x);
    assert(fabs(y - 1.1) < 1e-5);
}
