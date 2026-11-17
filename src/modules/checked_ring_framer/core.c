#include "interface.h"
#include <string.h>

checked_ring_framer_err_t frame_encode(framer_cfg_t cfg, const uint8_t* payload, size_t plen, uint8_t* out, size_t out_cap, size_t* out_written) {
    if (!out || !out_written || (plen > 0 && !payload)) return CHECKED_RING_FRAMER_ERR_NULL;
    checked_ring_framer_err_t err = validate_mtu(cfg, plen);
    if (err != CHECKED_RING_FRAMER_OK) return err;
    if (plen > SIZE_MAX - 8 || plen + 8 > out_cap) return CHECKED_RING_FRAMER_ERR_BOUNDS;
    uint32_t lp = (uint32_t)plen;
    out[0] = (uint8_t)lp; out[1] = (uint8_t)(lp >> 8);
    out[2] = (uint8_t)(lp >> 16); out[3] = (uint8_t)(lp >> 24);
    if (plen > 0) memcpy(out + 4, payload, plen);
    uint32_t crc = fast_crc32_bytes(out + 4, plen);
    out[4 + plen + 0] = (uint8_t)crc;
    out[4 + plen + 1] = (uint8_t)(crc >> 8);
    out[4 + plen + 2] = (uint8_t)(crc >> 16);
    out[4 + plen + 3] = (uint8_t)(crc >> 24);
    *out_written = plen + 8;
    return CHECKED_RING_FRAMER_OK;
}

checked_ring_framer_err_t frame_decode(framer_cfg_t cfg, const uint8_t* wire, size_t wlen, uint8_t* out_payload, size_t pcap, size_t* out_plen) {
    if (!wire || !out_payload || !out_plen) return CHECKED_RING_FRAMER_ERR_NULL;
    if (wlen < 8) return CHECKED_RING_FRAMER_ERR_BOUNDS;
    uint32_t plen = (uint32_t)wire[0] | ((uint32_t)wire[1] << 8) | ((uint32_t)wire[2] << 16) | ((uint32_t)wire[3] << 24);
    if (plen > cfg.max_mtu || plen > FRAMER_MAX_MTU || (size_t)plen + 8 != wlen || plen > pcap) {
        return CHECKED_RING_FRAMER_ERR_BOUNDS;
    }
    uint32_t expected_crc = fast_crc32_bytes(wire + 4, plen);
    uint32_t got_crc = (uint32_t)wire[4 + plen] | ((uint32_t)wire[5 + plen] << 8) |
                       ((uint32_t)wire[6 + plen] << 16) | ((uint32_t)wire[7 + plen] << 24);
    if (expected_crc != got_crc) return CHECKED_RING_FRAMER_ERR_INVALID;
    if (plen > 0) memcpy(out_payload, wire + 4, plen);
    *out_plen = plen;
    return CHECKED_RING_FRAMER_OK;
}
