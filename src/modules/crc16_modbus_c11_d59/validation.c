#include "interface.h"

crc16_modbus_c11_d59_err_t crc16_modbus_c11_d59_validate_len(size_t n) {
    if (n == 0) {
        return CRC16_MODBUS_C11_D59_ERR_INVALID;
    }
    return CRC16_MODBUS_C11_D59_OK;
}
