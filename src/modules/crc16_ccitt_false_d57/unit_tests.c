#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(crc16_ccitt_false_d57_validate_len(1) == CRC16_CCITT_FALSE_D57_OK);
    const uint8_t vec[9] = {'1','2','3','4','5','6','7','8','9'};
    assert(crc16_ccitt_false(vec, 9) == 0x29B1u);
    assert(crc16_ccitt_false_d57_verify_guard(true) == CRC16_CCITT_FALSE_D57_OK);
    return 0;
}
