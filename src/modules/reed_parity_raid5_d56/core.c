#include "interface.h"
#include <math.h>
#include <string.h>

void raid_compute_parity(const uint8_t *blocks, size_t n_data, size_t len, uint8_t *parity) {
    for (size_t i = 0; i < len; ++i) parity[i] = 0;
    for (size_t d = 0; d < n_data; ++d) {
        const uint8_t *blk = blocks + d * len;
        for (size_t i = 0; i < len; ++i) parity[i] ^= blk[i];
    }
}

void raid_recover_erasure(uint8_t *blocks, const uint8_t *parity, size_t n_data, size_t len, size_t failed_idx) {
    uint8_t *target = blocks + failed_idx * len;
    for (size_t i = 0; i < len; ++i) target[i] = parity[i];
    for (size_t d = 0; d < n_data; ++d) {
        if (d == failed_idx) continue;
        const uint8_t *blk = blocks + d * len;
        for (size_t i = 0; i < len; ++i) target[i] ^= blk[i];
    }
}
