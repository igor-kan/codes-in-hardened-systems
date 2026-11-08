/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#include <assert.h>
#include <math.h>

static inline void aslr_entropy_validator_assert_contract(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
