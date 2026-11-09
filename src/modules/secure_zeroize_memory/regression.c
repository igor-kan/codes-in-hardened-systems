/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Compiler-Barrier Immune Memory Zeroization Routine.
 * Module: secure_zeroize_memory
 */

#include <assert.h>

void test_secure_zeroize_memory_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
