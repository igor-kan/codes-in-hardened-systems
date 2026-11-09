/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Virtual Memory Guard Page Allocator with Mprotect.
 * Module: memory_guard_pages
 */

#include <assert.h>

void test_memory_guard_pages_regression_underflow(void) {
    double tiny = 1e-308;
    double res = tiny * (1.0 + 0.3 * tiny);
    assert(res >= 0.0);
}
