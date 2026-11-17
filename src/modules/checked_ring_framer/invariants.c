#include "interface.h"
#include <string.h>

checked_ring_framer_err_t verify_framer_roundtrip(const uint8_t* msg, size_t len) {
    uint8_t wire[FRAMER_MAX_MTU + 8], rec[FRAMER_MAX_MTU];
    size_t wlen = 0, rlen = 0;
    framer_cfg_t cfg = {FRAMER_MAX_MTU};
    if (frame_encode(cfg, msg, len, wire, sizeof(wire), &wlen) != CHECKED_RING_FRAMER_OK) return CHECKED_RING_FRAMER_ERR_INVARIANT;
    if (frame_decode(cfg, wire, wlen, rec, sizeof(rec), &rlen) != CHECKED_RING_FRAMER_OK) return CHECKED_RING_FRAMER_ERR_INVARIANT;
    if (rlen != len || (len > 0 && memcmp(msg, rec, len) != 0)) return CHECKED_RING_FRAMER_ERR_INVARIANT;
    wire[4] ^= 0x01U;
    if (frame_decode(cfg, wire, wlen, rec, sizeof(rec), &rlen) == CHECKED_RING_FRAMER_OK) return CHECKED_RING_FRAMER_ERR_INVARIANT;
    return CHECKED_RING_FRAMER_OK;
}
