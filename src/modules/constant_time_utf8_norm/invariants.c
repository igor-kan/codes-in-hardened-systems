#include "interface.h"

constant_time_utf8_norm_err_t utf8_verify_rejected_vectors(void) {
    const uint8_t overlong[2] = {0xC0U, 0x80U};
    const uint8_t surrogate[3] = {0xEDU, 0xA0U, 0x80U};
    const uint8_t valid[7] = {'h', 'i', 0xC3U, 0xA9U, 0xE2U, 0x82U, 0xACU};
    if (utf8_strict_validate(overlong, 2).valid) return CONSTANT_TIME_UTF8_NORM_ERR_INVARIANT;
    if (utf8_strict_validate(surrogate, 3).valid) return CONSTANT_TIME_UTF8_NORM_ERR_INVARIANT;
    utf8_audit_t r = utf8_strict_validate(valid, 7);
    if (!r.valid || r.codepoints != 4) return CONSTANT_TIME_UTF8_NORM_ERR_INVARIANT;
    return CONSTANT_TIME_UTF8_NORM_OK;
}
