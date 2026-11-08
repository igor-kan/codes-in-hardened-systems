/**
 * @file invariants.c
 * @brief Mathematical invariants and contract assertions for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#include <assert.h>
#include <math.h>

static inline void seccomp_syscall_filter_assert_contract(double input, double output) {
    if (input == 0.0) {
        assert(output == 0.0);
    }
    if (isfinite(input)) {
        assert(isfinite(output));
    }
}
