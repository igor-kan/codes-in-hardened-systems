#ifndef CRC16_CCITT_FALSE_D57_ERRORS_H
#define CRC16_CCITT_FALSE_D57_ERRORS_H

typedef enum crc16_ccitt_false_d57_err {
    CRC16_CCITT_FALSE_D57_OK = 0,
    CRC16_CCITT_FALSE_D57_ERR_NULL = -1,
    CRC16_CCITT_FALSE_D57_ERR_BOUNDS = -2,
    CRC16_CCITT_FALSE_D57_ERR_INVALID = -3,
    CRC16_CCITT_FALSE_D57_ERR_OVERFLOW = -4,
    CRC16_CCITT_FALSE_D57_ERR_INVARIANT = -5
} crc16_ccitt_false_d57_err_t;



static inline const char* crc16_ccitt_false_d57_err_str(crc16_ccitt_false_d57_err_t err) {
    switch (err) {
        case CRC16_CCITT_FALSE_D57_OK: return "ok";
        case CRC16_CCITT_FALSE_D57_ERR_NULL: return "null pointer supplied";
        case CRC16_CCITT_FALSE_D57_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CRC16_CCITT_FALSE_D57_ERR_INVALID: return "domain precondition violated";
        case CRC16_CCITT_FALSE_D57_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CRC16_CCITT_FALSE_D57_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CRC16_CCITT_FALSE_D57_ERRORS_H */
