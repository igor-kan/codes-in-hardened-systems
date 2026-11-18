#include "interface.h"

constant_time_bcd_codec_err_t constant_time_bcd_codec_validate_len(size_t n) {
    if (n == 0) {
        return CONSTANT_TIME_BCD_CODEC_ERR_INVALID;
    }
    return CONSTANT_TIME_BCD_CODEC_OK;
}
