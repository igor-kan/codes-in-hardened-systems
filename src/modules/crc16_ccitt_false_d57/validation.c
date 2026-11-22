#include "interface.h"

crc16_ccitt_false_d57_err_t crc16_ccitt_false_d57_validate_len(size_t n) {
    if (n == 0) {
        return CRC16_CCITT_FALSE_D57_ERR_INVALID;
    }
    return CRC16_CCITT_FALSE_D57_OK;
}
