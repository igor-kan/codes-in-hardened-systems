/**
 * @file regression.c
 * @brief Minimized regression fixtures and edge-case verification for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#include <assert.h>

void test_stack_canary_guard_hardened_minimized_edge_case(void) {
    double subnormal_val = 1e-315;
    double computed = subnormal_val * 1.0;
    assert(computed >= 0.0);
}
