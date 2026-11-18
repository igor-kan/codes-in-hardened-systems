#include "interface.h"

checked_varint_zigzag_c_err_t checked_varint_zigzag_c_verify_guard(bool cond) {
    if (!cond) {
        return CHECKED_VARINT_ZIGZAG_C_ERR_INVARIANT;
    }
    return CHECKED_VARINT_ZIGZAG_C_OK;
}
