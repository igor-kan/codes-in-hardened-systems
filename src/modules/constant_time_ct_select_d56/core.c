#include "interface.h"
#include <math.h>
#include <string.h>

uint64_t ct_select_u64(uint32_t cond, uint64_t a, uint64_t b) {
    uint64_t nz = (uint64_t)(((uint32_t)(cond | (0u - cond))) >> 31);
    uint64_t mask = 0ULL - nz;
    return (a & mask) | (b & ~mask);
}

int ct_mem_equal(const uint8_t *a, const uint8_t *b, size_t len) {
    uint32_t diff = 0;
    for (size_t i = 0; i < len; ++i) {
        diff |= (uint32_t)(a[i] ^ b[i]);
    }
    return (int)(((diff - 1u) >> 31) & 1u);
}
