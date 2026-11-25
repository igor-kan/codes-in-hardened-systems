#ifndef COBS_PACKET_CODEC_D60_INTERFACE_H
#define COBS_PACKET_CODEC_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

size_t cobs_encode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap);
bool cobs_decode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap, size_t* out_len);

cobs_packet_codec_d60_err_t cobs_packet_codec_d60_validate_len(size_t n);
uint64_t cobs_packet_codec_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t cobs_packet_codec_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
cobs_packet_codec_d60_err_t cobs_packet_codec_d60_verify_guard(bool cond);

#endif /* COBS_PACKET_CODEC_D60_INTERFACE_H */
