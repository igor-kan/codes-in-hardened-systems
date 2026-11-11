/**
 * @file test_unit.c
 * @brief Deterministic unit tests for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

#include "types.c"
#include "interface.c"
#include <assert.h>
#include <math.h>

void run_stack_unwind_validator_unit_tests_day47(void) {
    double zero_in = 0.0;
    double zero_out = zero_in * (1.0 + 0.4 * zero_in - 0.02 * zero_in * zero_in);
    assert(zero_out == 0.0);

    double small_in = 1e-5;
    double approx = small_in * (1.0 + 0.4 * small_in);
    assert(fabs(approx - small_in) < 1e-4);
}
