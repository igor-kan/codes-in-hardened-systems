#ifndef SLIP_FRAME_CODEC_D60_INTERFACE_H
#define SLIP_FRAME_CODEC_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

size_t slip_encode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap);
bool slip_decode_d60(const uint8_t* in, size_t n, uint8_t* out, size_t cap, size_t* out_len);

slip_frame_codec_d60_err_t slip_frame_codec_d60_validate_len(size_t n);
uint64_t slip_frame_codec_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t slip_frame_codec_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
slip_frame_codec_d60_err_t slip_frame_codec_d60_verify_guard(bool cond);

#endif /* SLIP_FRAME_CODEC_D60_INTERFACE_H */
