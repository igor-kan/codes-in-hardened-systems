#include "interface.h"
#include <math.h>
#include <string.h>

uint64_t zigzag_encode_i64(int64_t x) {
    return ((uint64_t)x << 1) ^ (uint64_t)(x >> 63);
}
int64_t zigzag_decode_u64(uint64_t z) {
    return (int64_t)((z >> 1) ^ (~(z & 1ULL) + 1ULL));
}
size_t leb128_write_u64(uint64_t v, uint8_t out[10]) {
    size_t i = 0;
    do {
        uint8_t b = (uint8_t)(v & 0x7fU);
        v >>= 7;
        if (v != 0) b |= 0x80U;
        out[i++] = b;
    } while (v != 0);
    return i;
}
bool leb128_read_checked(const uint8_t* buf, size_t len, uint64_t* out_v, size_t* out_used) {
    uint64_t res = 0;
    for (size_t i = 0; i < len && i < 10; ++i) {
        uint8_t b = buf[i];
        if (i == 9 && (b > 1U)) return false;
        res |= ((uint64_t)(b & 0x7fU)) << (7 * i);
        if ((b & 0x80U) == 0) {
            if (i > 0 && b == 0) return false; /* reject non-canonical trailing zero */
            *out_v = res; *out_used = i + 1;
            return true;
        }
    }
    return false;
}
