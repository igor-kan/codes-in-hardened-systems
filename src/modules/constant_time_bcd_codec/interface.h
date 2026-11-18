#ifndef CONSTANT_TIME_BCD_CODEC_INTERFACE_H
#define CONSTANT_TIME_BCD_CODEC_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t ct_nibble_is_bcd(uint8_t nib);
bool ct_bcd_decode_u64(const uint8_t* bcd, size_t len, uint64_t* out);

constant_time_bcd_codec_err_t constant_time_bcd_codec_validate_len(size_t n);
uint64_t constant_time_bcd_codec_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t constant_time_bcd_codec_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
constant_time_bcd_codec_err_t constant_time_bcd_codec_verify_guard(bool cond);

#endif /* CONSTANT_TIME_BCD_CODEC_INTERFACE_H */
