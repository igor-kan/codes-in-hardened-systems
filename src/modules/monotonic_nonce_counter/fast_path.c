#include "interface.h"

uint32_t fast_crc_seal(const replay_window_t* rw) {
    uint64_t h = rw->high_water ^ (rw->bitmap * 0x9e3779b97f4a7c15ULL) ^ ((uint64_t)rw->epoch << 1) ^ (uint64_t)rw->initialized;
    h ^= h >> 30;
    h *= 0xbf58476d1ce4e5b9ULL;
    return (uint32_t)(h ^ (h >> 32));
}
