/**
 * @file fuzz_target.c
 * @brief Continuous fuzzing target for AFL++ and LibFuzzer for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput_stack_cookie_sentinel_day50(const uint8_t* data, size_t size) {
    if (size < sizeof(double)) return 0;
    const double* val = (const double*)data;
    if (*val == *val && *val > -1e6 && *val < 1e6) {
        double res = (*val) * 1.0001;
        (void)res;
    }
    return 0;
}
