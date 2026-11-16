#ifndef CONSTANT_TIME_HEX_DECODE_INTERFACE_H
#define CONSTANT_TIME_HEX_DECODE_INTERFACE_H

#include "types.h"
#include "errors.h"

constant_time_hex_decode_err_t cthex_encode(const uint8_t* src, size_t len, char* dst, size_t dst_cap);
constant_time_hex_decode_err_t cthex_decode(const char* hex, size_t hex_len, uint8_t* out, size_t out_cap, size_t* out_len);
constant_time_hex_decode_err_t cthex_validate_even(size_t hex_len);
constant_time_hex_decode_err_t cthex_batch_decode_mt(const char** hexes, const size_t* lens, size_t count, size_t num_threads);
constant_time_hex_decode_err_t cthex_verify_invariants(const uint8_t* data, size_t len);

#endif /* CONSTANT_TIME_HEX_DECODE_INTERFACE_H */
