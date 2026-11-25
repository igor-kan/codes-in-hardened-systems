#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t ct_memeq_d60(const uint8_t* a, const uint8_t* b, size_t n) {
    uint32_t diff = 0U;
    for (size_t i = 0; i < n; ++i) {
        diff |= (uint32_t)(a[i] ^ b[i]);
    }
    return 1U ^ ((diff | (~diff + 1U)) >> 31);
}
uint64_t ct_select_u64_d60(uint32_t cond, uint64_t if_true, uint64_t if_false) {
    uint64_t mask = -(uint64_t)(cond & 1U);
    return (if_true & mask) | (if_false & ~mask);
}
