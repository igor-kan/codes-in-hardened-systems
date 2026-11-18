#include "interface.h"
#include <math.h>
#include <string.h>

static uint64_t rotl64_sc(uint64_t x, int b) { return (x << b) | (x >> (64 - b)); }
static uint64_t sip_mix(cookie_key_t k, uint64_t m) {
    uint64_t v0 = 0x736f6d6570736575ULL ^ k.k0;
    uint64_t v1 = 0x646f72616e646f6dULL ^ k.k1;
    uint64_t v2 = 0x6c7967656e657261ULL ^ k.k0;
    uint64_t v3 = 0x7465646279746573ULL ^ k.k1 ^ m;
    for (int r = 0; r < 4; ++r) {
        v0 += v1; v1 = rotl64_sc(v1, 13); v1 ^= v0; v0 = rotl64_sc(v0, 32);
        v2 += v3; v3 = rotl64_sc(v3, 16); v3 ^= v2;
        v0 += v3; v3 = rotl64_sc(v3, 21); v3 ^= v0;
        v2 += v1; v1 = rotl64_sc(v1, 17); v1 ^= v2; v2 = rotl64_sc(v2, 32);
    }
    return (v0 ^ v1 ^ v2 ^ v3) & 0xffffffff00000000ULL;
}
uint64_t sipcookie_make(cookie_key_t k, uint64_t client_id, uint32_t ts_slot) {
    uint64_t tag = sip_mix(k, client_id ^ ((uint64_t)ts_slot << 32));
    return tag | (uint64_t)ts_slot;
}
bool sipcookie_verify(cookie_key_t k, uint64_t client_id, uint32_t now_slot, uint64_t cookie) {
    uint32_t ts = (uint32_t)(cookie & 0xffffffffULL);
    if (now_slot < ts || now_slot - ts > 2U) return false;
    uint64_t expected = sipcookie_make(k, client_id, ts);
    return ((expected ^ cookie) == 0ULL);
}
