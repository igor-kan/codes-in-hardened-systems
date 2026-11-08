/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#include <assert.h>
#include <math.h>

static inline void memory_poison_allocator_assert_contract(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
