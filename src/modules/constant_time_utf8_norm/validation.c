#include "interface.h"

constant_time_utf8_norm_err_t utf8_validate_args(const uint8_t* data, size_t len) {
    if (len > 0 && !data) return CONSTANT_TIME_UTF8_NORM_ERR_NULL;
    return CONSTANT_TIME_UTF8_NORM_OK;
}
