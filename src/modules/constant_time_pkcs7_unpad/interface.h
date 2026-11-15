#ifndef CONSTANT_TIME_PKCS7_UNPAD_INTERFACE_H
#define CONSTANT_TIME_PKCS7_UNPAD_INTERFACE_H

#include "types.h"
#include "errors.h"

constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_verify(const uint8_t* block, size_t block_len, size_t* out_unpadded_len);
constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_pad(uint8_t* buf, size_t data_len, size_t block_size, size_t* out_total);
uint8_t constant_time_pkcs7_unpad_eq_mask(uint8_t a, uint8_t b);
constant_time_pkcs7_unpad_err_t constant_time_pkcs7_unpad_check_invariants(size_t bsize);

#endif /* CONSTANT_TIME_PKCS7_UNPAD_INTERFACE_H */
