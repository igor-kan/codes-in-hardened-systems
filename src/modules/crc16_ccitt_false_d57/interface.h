#ifndef CRC16_CCITT_FALSE_D57_INTERFACE_H
#define CRC16_CCITT_FALSE_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

uint16_t crc16_ccitt_false(const uint8_t *buf, size_t len);

crc16_ccitt_false_d57_err_t crc16_ccitt_false_d57_validate_len(size_t n);
uint64_t crc16_ccitt_false_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t crc16_ccitt_false_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
crc16_ccitt_false_d57_err_t crc16_ccitt_false_d57_verify_guard(bool cond);

#endif /* CRC16_CCITT_FALSE_D57_INTERFACE_H */
