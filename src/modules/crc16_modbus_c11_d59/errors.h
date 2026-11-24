#ifndef CRC16_MODBUS_C11_D59_ERRORS_H
#define CRC16_MODBUS_C11_D59_ERRORS_H

typedef enum crc16_modbus_c11_d59_err {
    CRC16_MODBUS_C11_D59_OK = 0,
    CRC16_MODBUS_C11_D59_ERR_NULL = -1,
    CRC16_MODBUS_C11_D59_ERR_BOUNDS = -2,
    CRC16_MODBUS_C11_D59_ERR_INVALID = -3,
    CRC16_MODBUS_C11_D59_ERR_OVERFLOW = -4,
    CRC16_MODBUS_C11_D59_ERR_INVARIANT = -5
} crc16_modbus_c11_d59_err_t;



static inline const char* crc16_modbus_c11_d59_err_str(crc16_modbus_c11_d59_err_t err) {
    switch (err) {
        case CRC16_MODBUS_C11_D59_OK: return "ok";
        case CRC16_MODBUS_C11_D59_ERR_NULL: return "null pointer supplied";
        case CRC16_MODBUS_C11_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CRC16_MODBUS_C11_D59_ERR_INVALID: return "domain precondition violated";
        case CRC16_MODBUS_C11_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CRC16_MODBUS_C11_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CRC16_MODBUS_C11_D59_ERRORS_H */
