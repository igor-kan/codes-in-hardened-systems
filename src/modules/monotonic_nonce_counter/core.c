#include "interface.h"

void replay_init(replay_window_t* rw, uint32_t epoch) {
    rw->high_water = 0;
    rw->bitmap = 0;
    rw->epoch = epoch;
    rw->initialized = false;
    rw->crc_seal = fast_crc_seal(rw);
}

monotonic_nonce_counter_err_t replay_accept(replay_window_t* rw, uint64_t seq) {
    if (!rw) return MONOTONIC_NONCE_COUNTER_ERR_NULL;
    monotonic_nonce_counter_err_t serr = replay_validate_seal(rw);
    if (serr != MONOTONIC_NONCE_COUNTER_OK) return serr;
    if (!rw->initialized) {
        rw->high_water = seq;
        rw->bitmap = 1ULL;
        rw->initialized = true;
        rw->crc_seal = fast_crc_seal(rw);
        return MONOTONIC_NONCE_COUNTER_OK;
    }
    if (seq > rw->high_water) {
        uint64_t shift = seq - rw->high_water;
        rw->bitmap = (shift >= 64ULL) ? 1ULL : ((rw->bitmap << shift) | 1ULL);
        rw->high_water = seq;
        rw->crc_seal = fast_crc_seal(rw);
        return MONOTONIC_NONCE_COUNTER_OK;
    }
    uint64_t diff = rw->high_water - seq;
    if (diff >= 64ULL) return MONOTONIC_NONCE_COUNTER_ERR_BOUNDS;
    uint64_t mask = 1ULL << diff;
    if (rw->bitmap & mask) return MONOTONIC_NONCE_COUNTER_ERR_INVALID;
    rw->bitmap |= mask;
    rw->crc_seal = fast_crc_seal(rw);
    return MONOTONIC_NONCE_COUNTER_OK;
}
