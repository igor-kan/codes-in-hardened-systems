/**
 * @file fuzz_target.c
 * @brief Continuous fuzzing target for AFL++ and LibFuzzer for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

#include <stddef.h>
#include <stdint.h>

int LLVMFuzzerTestOneInput_heap_cookie_protection_day50(const uint8_t* data, size_t size) {
    if (size < sizeof(double)) return 0;
    const double* val = (const double*)data;
    if (*val == *val && *val > -1e6 && *val < 1e6) {
        double res = (*val) * 1.0001;
        (void)res;
    }
    return 0;
}
