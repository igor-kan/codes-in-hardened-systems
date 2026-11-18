#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t ct_nibble_is_bcd(uint8_t nib) {
    uint32_t x = (uint32_t)(nib & 0x0fU);
    return (9U - x) >> 31 ^ 1U;
}
bool ct_bcd_decode_u64(const uint8_t* bcd, size_t len, uint64_t* out) {
    uint32_t ok = 1U;
    uint64_t acc = 0;
    for (size_t i = 0; i < len; ++i) {
        uint8_t hi = (uint8_t)(bcd[i] >> 4), lo = (uint8_t)(bcd[i] & 0x0fU);
        ok &= ct_nibble_is_bcd(hi) & ct_nibble_is_bcd(lo);
        acc = acc * 100ULL + (uint64_t)hi * 10ULL + (uint64_t)lo;
    }
    *out = ok ? acc : 0ULL;
    return ok != 0U;
}
