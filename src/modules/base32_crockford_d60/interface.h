#ifndef BASE32_CROCKFORD_D60_INTERFACE_H
#define BASE32_CROCKFORD_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

size_t b32_crockford_encode_d60(const uint8_t* in, size_t n, char* out, size_t cap);
bool b32_crockford_decode_d60(const char* in, size_t n, uint8_t* out, size_t cap, size_t* out_len);

base32_crockford_d60_err_t base32_crockford_d60_validate_len(size_t n);
uint64_t base32_crockford_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t base32_crockford_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
base32_crockford_d60_err_t base32_crockford_d60_verify_guard(bool cond);

#endif /* BASE32_CROCKFORD_D60_INTERFACE_H */
