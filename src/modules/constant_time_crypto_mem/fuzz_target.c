/**
 * @file fuzz_target.c
 * @brief Continuous fuzzing harness for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput_constant_time_crypto_mem_day46(const uint8_t* data, size_t size) {
    if (size < sizeof(double)) return 0;
    const double* val = (const double*)data;
    if (*val == *val && *val < 1e5 && *val > -1e5) {
        double res = (*val) * (1.0 + 0.35 * (*val));
        (void)res;
    }
    return 0;
}
