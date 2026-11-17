#ifndef CHECKED_RING_FRAMER_INTERFACE_H
#define CHECKED_RING_FRAMER_INTERFACE_H

#include "types.h"
#include "errors.h"

checked_ring_framer_err_t frame_encode(framer_cfg_t cfg, const uint8_t* payload, size_t plen, uint8_t* out, size_t out_cap, size_t* out_written);
checked_ring_framer_err_t frame_decode(framer_cfg_t cfg, const uint8_t* wire, size_t wlen, uint8_t* out_payload, size_t pcap, size_t* out_plen);
checked_ring_framer_err_t validate_mtu(framer_cfg_t cfg, size_t plen);
uint32_t fast_crc32_bytes(const uint8_t* data, size_t len);
void parallel_crc_tags(const uint8_t* a, size_t na, const uint8_t* b, size_t nb, uint32_t out[2]);
checked_ring_framer_err_t verify_framer_roundtrip(const uint8_t* msg, size_t len);

#endif /* CHECKED_RING_FRAMER_INTERFACE_H */
