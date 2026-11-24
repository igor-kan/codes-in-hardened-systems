#ifndef CRC16_MODBUS_C11_D59_INTERFACE_H
#define CRC16_MODBUS_C11_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

uint16_t crc16_modbus(const uint8_t *buf, size_t len);

crc16_modbus_c11_d59_err_t crc16_modbus_c11_d59_validate_len(size_t n);
uint64_t crc16_modbus_c11_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t crc16_modbus_c11_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
crc16_modbus_c11_d59_err_t crc16_modbus_c11_d59_verify_guard(bool cond);

#endif /* CRC16_MODBUS_C11_D59_INTERFACE_H */
