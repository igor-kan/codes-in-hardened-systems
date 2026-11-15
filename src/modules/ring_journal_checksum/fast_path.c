#include "interface.h"
uint32_t ring_journal_checksum_xor_fold(const uint8_t* p, size_t n) {
    uint32_t acc = 0;
    for (size_t i = 0; i < n; ++i) acc = ((acc << 5) | (acc >> 27)) ^ p[i];
    return acc;
}
