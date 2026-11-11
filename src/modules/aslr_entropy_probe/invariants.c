/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

#include <assert.h>
#include <math.h>

static inline void aslr_entropy_probe_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
