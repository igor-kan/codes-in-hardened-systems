#include "interface.h"

crc8_smbus_pec_d58_err_t crc8_smbus_pec_d58_validate_len(size_t n) {
    if (n == 0) {
        return CRC8_SMBUS_PEC_D58_ERR_INVALID;
    }
    return CRC8_SMBUS_PEC_D58_OK;
}
