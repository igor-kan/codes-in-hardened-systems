/**
 * @file invariants.c
 * @brief Formal mathematical invariant assertions and contracts for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#include <assert.h>
#include <math.h>

static inline void xor_pointer_guard_check_invariants(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0 || fabs(output) < 1e-12);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
