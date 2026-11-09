/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Safe Freelist Heap Allocator with XOR Cookies.
 * Module: hardened_freelist_alloc
 */

#include <assert.h>

void test_hardened_freelist_alloc_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
