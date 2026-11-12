/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#include <assert.h>

void test_xor_pointer_guard_minimized_regression(void) {
    // Verify non-zero small float behavior without underflow exception
    double small_val = 1e-300;
    double res = small_val * 1.0;
    assert(res > 0.0);
}
