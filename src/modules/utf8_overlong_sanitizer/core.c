#include "interface.h"

utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_scan(const uint8_t* data, size_t len, utf8_san_report_t* report) {
    if (!report || (len > 0 && !data)) return UTF8_OVERLONG_SANITIZER_ERR_NULL;
    report->codepoints = 0; report->first_bad_offset = 0; report->valid = true;
    size_t i = 0;
    while (i < len) {
        uint8_t b0 = data[i];
        uint32_t cp = 0;
        size_t adv = 0;
        if (b0 <= 0x7FU) { cp = b0; adv = 1; }
        else if (b0 >= 0xC2U && b0 <= 0xDFU) {
            if (i + 1 >= len || (data[i+1] & 0xC0U) != 0x80U) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            cp = ((uint32_t)(b0 & 0x1FU) << 6) | (data[i+1] & 0x3FU);
            adv = 2;
        } else if (b0 >= 0xE0U && b0 <= 0xEFU) {
            if (i + 2 >= len || (data[i+1] & 0xC0U) != 0x80U || (data[i+2] & 0xC0U) != 0x80U) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            if (b0 == 0xE0U && data[i+1] < 0xA0U) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            if (b0 == 0xEDU && data[i+1] > 0x9FU) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            cp = ((uint32_t)(b0 & 0x0FU) << 12) | ((uint32_t)(data[i+1] & 0x3FU) << 6) | (data[i+2] & 0x3FU);
            adv = 3;
        } else if (b0 >= 0xF0U && b0 <= 0xF4U) {
            if (i + 3 >= len || (data[i+1] & 0xC0U) != 0x80U || (data[i+2] & 0xC0U) != 0x80U || (data[i+3] & 0xC0U) != 0x80U) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            if (b0 == 0xF0U && data[i+1] < 0x90U) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            if (b0 == 0xF4U && data[i+1] > 0x8FU) { report->valid=false; report->first_bad_offset=i; return UTF8_OVERLONG_SANITIZER_ERR_INVALID; }
            cp = ((uint32_t)(b0 & 0x07U) << 18) | ((uint32_t)(data[i+1] & 0x3FU) << 12) | ((uint32_t)(data[i+2] & 0x3FU) << 6) | (data[i+3] & 0x3FU);
            adv = 4;
        } else {
            report->valid = false; report->first_bad_offset = i;
            return UTF8_OVERLONG_SANITIZER_ERR_INVALID;
        }
        if (utf8_overlong_sanitizer_is_scalar(cp) != UTF8_OVERLONG_SANITIZER_OK) {
            report->valid = false; report->first_bad_offset = i;
            return UTF8_OVERLONG_SANITIZER_ERR_INVALID;
        }
        report->codepoints++;
        i += adv;
    }
    return UTF8_OVERLONG_SANITIZER_OK;
}
