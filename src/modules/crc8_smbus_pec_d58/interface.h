#ifndef CRC8_SMBUS_PEC_D58_INTERFACE_H
#define CRC8_SMBUS_PEC_D58_INTERFACE_H

#include "types.h"
#include "errors.h"

uint8_t crc8_smbus(const uint8_t *buf, size_t len);

crc8_smbus_pec_d58_err_t crc8_smbus_pec_d58_validate_len(size_t n);
uint64_t crc8_smbus_pec_d58_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t crc8_smbus_pec_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
crc8_smbus_pec_d58_err_t crc8_smbus_pec_d58_verify_guard(bool cond);

#endif /* CRC8_SMBUS_PEC_D58_INTERFACE_H */
