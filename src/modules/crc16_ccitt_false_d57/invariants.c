#include "interface.h"

crc16_ccitt_false_d57_err_t crc16_ccitt_false_d57_verify_guard(bool cond) {
    if (!cond) {
        return CRC16_CCITT_FALSE_D57_ERR_INVARIANT;
    }
    return CRC16_CCITT_FALSE_D57_OK;
}
