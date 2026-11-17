#include "interface.h"

static uint64_t rotl64_step(uint64_t x, int r) { return (x << r) | (x >> (64 - r)); }

uint64_t fast_keyed_compress(uint64_t k0, uint64_t k1, uint64_t prev_mac, uint64_t seq, uint64_t digest) {
    uint64_t v0 = 0x736f6d6570736575ULL ^ k0 ^ prev_mac;
    uint64_t v1 = 0x646f72616e646f6dULL ^ k1 ^ seq;
    uint64_t v2 = 0x6c7967656e657261ULL ^ k0 ^ digest;
    uint64_t v3 = 0x7465646279746573ULL ^ k1;
    for (int r = 0; r < 4; ++r) {
        v0 += v1; v1 = rotl64_step(v1, 13); v1 ^= v0; v0 = rotl64_step(v0, 32);
        v2 += v3; v3 = rotl64_step(v3, 16); v3 ^= v2;
        v0 += v3; v3 = rotl64_step(v3, 21); v3 ^= v0;
        v2 += v1; v1 = rotl64_step(v1, 17); v1 ^= v2; v2 = rotl64_step(v2, 32);
    }
    return v0 ^ v1 ^ v2 ^ v3;
}
