#ifndef CHECKED_VARINT_ZIGZAG_C_INTERFACE_H
#define CHECKED_VARINT_ZIGZAG_C_INTERFACE_H

#include "types.h"
#include "errors.h"

uint64_t zigzag_encode_i64(int64_t x);
int64_t zigzag_decode_u64(uint64_t z);
size_t leb128_write_u64(uint64_t v, uint8_t out[10]);
bool leb128_read_checked(const uint8_t* buf, size_t len, uint64_t* out_v, size_t* out_used);

checked_varint_zigzag_c_err_t checked_varint_zigzag_c_validate_len(size_t n);
uint64_t checked_varint_zigzag_c_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t checked_varint_zigzag_c_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
checked_varint_zigzag_c_err_t checked_varint_zigzag_c_verify_guard(bool cond);

#endif /* CHECKED_VARINT_ZIGZAG_C_INTERFACE_H */
