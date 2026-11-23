#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t adler32_compute(const uint8_t *buf, size_t len) {
    const uint32_t MOD_ADLER = 65521u;
    uint32_t a = 1u, b = 0u;
    for (size_t i = 0; i < len; ++i) {
        a = (a + buf[i]) % MOD_ADLER;
        b = (b + a) % MOD_ADLER;
    }
    return (b << 16) | a;
}
