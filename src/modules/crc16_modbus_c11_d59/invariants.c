#include "interface.h"

crc16_modbus_c11_d59_err_t crc16_modbus_c11_d59_verify_guard(bool cond) {
    if (!cond) {
        return CRC16_MODBUS_C11_D59_ERR_INVARIANT;
    }
    return CRC16_MODBUS_C11_D59_OK;
}
