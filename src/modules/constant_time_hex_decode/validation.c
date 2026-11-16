#include "interface.h"

constant_time_hex_decode_err_t cthex_validate_even(size_t hex_len) {
    return (hex_len & 1U) ? CONSTANT_TIME_HEX_DECODE_ERR_INVALID : CONSTANT_TIME_HEX_DECODE_OK;
}
