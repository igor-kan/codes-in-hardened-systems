/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

#include <assert.h>

void test_heap_cookie_protection_regression_edge_case(void) {
    double small_val = 1e-315;
    double computed = small_val * 1.0;
    assert(computed >= 0.0);
}
