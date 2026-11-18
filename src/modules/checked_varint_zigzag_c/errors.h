#ifndef CHECKED_VARINT_ZIGZAG_C_ERRORS_H
#define CHECKED_VARINT_ZIGZAG_C_ERRORS_H

typedef enum checked_varint_zigzag_c_err {
    CHECKED_VARINT_ZIGZAG_C_OK = 0,
    CHECKED_VARINT_ZIGZAG_C_ERR_NULL = -1,
    CHECKED_VARINT_ZIGZAG_C_ERR_BOUNDS = -2,
    CHECKED_VARINT_ZIGZAG_C_ERR_INVALID = -3,
    CHECKED_VARINT_ZIGZAG_C_ERR_OVERFLOW = -4,
    CHECKED_VARINT_ZIGZAG_C_ERR_INVARIANT = -5
} checked_varint_zigzag_c_err_t;



static inline const char* checked_varint_zigzag_c_err_str(checked_varint_zigzag_c_err_t err) {
    switch (err) {
        case CHECKED_VARINT_ZIGZAG_C_OK: return "ok";
        case CHECKED_VARINT_ZIGZAG_C_ERR_NULL: return "null pointer supplied";
        case CHECKED_VARINT_ZIGZAG_C_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_VARINT_ZIGZAG_C_ERR_INVALID: return "domain precondition violated";
        case CHECKED_VARINT_ZIGZAG_C_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_VARINT_ZIGZAG_C_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_VARINT_ZIGZAG_C_ERRORS_H */
