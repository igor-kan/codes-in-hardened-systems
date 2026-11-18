#include "interface.h"

checked_varint_zigzag_c_err_t checked_varint_zigzag_c_validate_len(size_t n) {
    if (n == 0) {
        return CHECKED_VARINT_ZIGZAG_C_ERR_INVALID;
    }
    return CHECKED_VARINT_ZIGZAG_C_OK;
}
