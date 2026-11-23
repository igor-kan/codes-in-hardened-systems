#include "interface.h"

crc8_smbus_pec_d58_err_t crc8_smbus_pec_d58_verify_guard(bool cond) {
    if (!cond) {
        return CRC8_SMBUS_PEC_D58_ERR_INVARIANT;
    }
    return CRC8_SMBUS_PEC_D58_OK;
}
