#include "interface.h"
#include <math.h>
#include <string.h>

uint8_t hamming84_encode(uint8_t nibble) {
    uint8_t d1 = (nibble >> 0) & 1u;
    uint8_t d2 = (nibble >> 1) & 1u;
    uint8_t d3 = (nibble >> 2) & 1u;
    uint8_t d4 = (nibble >> 3) & 1u;
    uint8_t p1 = d1 ^ d2 ^ d4;
    uint8_t p2 = d1 ^ d3 ^ d4;
    uint8_t p4 = d2 ^ d3 ^ d4;
    uint8_t c7 = (uint8_t)((p1 << 0) | (p2 << 1) | (d1 << 2) | (p4 << 3) | (d2 << 4) | (d3 << 5) | (d4 << 6));
    uint8_t p0 = 0;
    for (int i = 0; i < 7; ++i) p0 ^= (c7 >> i) & 1u;
    return (uint8_t)(c7 | (p0 << 7));
}

int hamming84_decode(uint8_t cw, uint8_t *out_nibble) {
    uint8_t b[8];
    uint8_t overall = 0;
    for (int i = 0; i < 8; ++i) {
        b[i] = (cw >> i) & 1u;
        overall ^= b[i];
    }
    uint8_t s1 = b[0] ^ b[2] ^ b[4] ^ b[6];
    uint8_t s2 = b[1] ^ b[2] ^ b[5] ^ b[6];
    uint8_t s4 = b[3] ^ b[4] ^ b[5] ^ b[6];
    uint8_t syn = (uint8_t)(s1 | (s2 << 1) | (s4 << 2));
    if (syn != 0 && overall == 0) return -1;
    if (syn != 0 && syn <= 7u) {
        cw ^= (uint8_t)(1u << (syn - 1u));
    }
    uint8_t d1 = (cw >> 2) & 1u;
    uint8_t d2 = (cw >> 4) & 1u;
    uint8_t d3 = (cw >> 5) & 1u;
    uint8_t d4 = (cw >> 6) & 1u;
    *out_nibble = (uint8_t)(d1 | (d2 << 1) | (d3 << 2) | (d4 << 3));
    return syn == 0 ? 0 : 1;
}
