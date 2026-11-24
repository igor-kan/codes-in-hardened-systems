#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(crc16_modbus_c11_d59_validate_len(1) == CRC16_MODBUS_C11_D59_OK);
    const uint8_t vec[9] = {'1','2','3','4','5','6','7','8','9'};
    assert(crc16_modbus(vec, 9) == 0x4B37u);
    assert(crc16_modbus_c11_d59_verify_guard(true) == CRC16_MODBUS_C11_D59_OK);
    return 0;
}
