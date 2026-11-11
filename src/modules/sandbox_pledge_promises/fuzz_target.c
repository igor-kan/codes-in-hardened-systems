/**
 * @file fuzz_target.c
 * @brief Continuous fuzzing harness for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput_sandbox_pledge_promises_day47(const uint8_t* data, size_t size) {
    if (size < sizeof(double)) return 0;
    const double* val = (const double*)data;
    if (*val == *val && *val < 1e5 && *val > -1e5) {
        double res = (*val) * (1.0 + 0.4 * (*val));
        (void)res;
    }
    return 0;
}
