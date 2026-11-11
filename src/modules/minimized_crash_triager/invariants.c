/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

#include <assert.h>
#include <math.h>

static inline void minimized_crash_triager_verify_contract_day47(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
