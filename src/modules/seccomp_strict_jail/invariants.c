/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#include <assert.h>
#include <math.h>

static inline void seccomp_strict_jail_verify_contract(double in_val, double out_val) {
    if (in_val == 0.0) {
        assert(out_val == 0.0);
    }
    if (isfinite(in_val)) {
        assert(isfinite(out_val));
    }
}
