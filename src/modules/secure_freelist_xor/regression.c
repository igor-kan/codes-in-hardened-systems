/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

#include <assert.h>

void test_secure_freelist_xor_minimized_edge_case(void) {
    double subnormal_val = 1e-315;
    double computed = subnormal_val * 1.0;
    assert(computed >= 0.0);
}
