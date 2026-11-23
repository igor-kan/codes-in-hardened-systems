#ifndef CRC8_SMBUS_PEC_D58_ERRORS_H
#define CRC8_SMBUS_PEC_D58_ERRORS_H

typedef enum crc8_smbus_pec_d58_err {
    CRC8_SMBUS_PEC_D58_OK = 0,
    CRC8_SMBUS_PEC_D58_ERR_NULL = -1,
    CRC8_SMBUS_PEC_D58_ERR_BOUNDS = -2,
    CRC8_SMBUS_PEC_D58_ERR_INVALID = -3,
    CRC8_SMBUS_PEC_D58_ERR_OVERFLOW = -4,
    CRC8_SMBUS_PEC_D58_ERR_INVARIANT = -5
} crc8_smbus_pec_d58_err_t;



static inline const char* crc8_smbus_pec_d58_err_str(crc8_smbus_pec_d58_err_t err) {
    switch (err) {
        case CRC8_SMBUS_PEC_D58_OK: return "ok";
        case CRC8_SMBUS_PEC_D58_ERR_NULL: return "null pointer supplied";
        case CRC8_SMBUS_PEC_D58_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CRC8_SMBUS_PEC_D58_ERR_INVALID: return "domain precondition violated";
        case CRC8_SMBUS_PEC_D58_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CRC8_SMBUS_PEC_D58_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CRC8_SMBUS_PEC_D58_ERRORS_H */
