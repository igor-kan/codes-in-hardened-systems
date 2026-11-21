#ifndef HAMMING_SECDED_74_D56_INTERFACE_H
#define HAMMING_SECDED_74_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

uint8_t hamming84_encode(uint8_t nibble);
int hamming84_decode(uint8_t cw, uint8_t *out_nibble);

hamming_secded_74_d56_err_t hamming_secded_74_d56_validate_len(size_t n);
uint64_t hamming_secded_74_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t hamming_secded_74_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
hamming_secded_74_d56_err_t hamming_secded_74_d56_verify_guard(bool cond);

#endif /* HAMMING_SECDED_74_D56_INTERFACE_H */
