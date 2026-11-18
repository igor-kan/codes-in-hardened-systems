#include "interface.h"

constant_time_bcd_codec_err_t constant_time_bcd_codec_verify_guard(bool cond) {
    if (!cond) {
        return CONSTANT_TIME_BCD_CODEC_ERR_INVARIANT;
    }
    return CONSTANT_TIME_BCD_CODEC_OK;
}
