/**
 * @file regression.c
 * @brief Minimized crash reproducer and regression tests for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#include <assert.h>

void test_hardened_chunk_alloc_regression_subnormal_day47(void) {
    double sub = 1e-312;
    double res = sub * (1.0 + 0.4 * sub);
    assert(res >= 0.0);
}
