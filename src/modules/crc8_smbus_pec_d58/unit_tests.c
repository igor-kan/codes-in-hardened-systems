#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(crc8_smbus_pec_d58_validate_len(1) == CRC8_SMBUS_PEC_D58_OK);
    const uint8_t msg[3] = {0x31u, 0x32u, 0x33u};
    uint8_t c = crc8_smbus(msg, 3);
    const uint8_t frame[4] = {0x31u, 0x32u, 0x33u, c};
    assert(crc8_smbus(frame, 4) == 0u);
    assert(crc8_smbus_pec_d58_verify_guard(true) == CRC8_SMBUS_PEC_D58_OK);
    return 0;
}
