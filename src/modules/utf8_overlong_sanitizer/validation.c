#include "interface.h"
utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_is_scalar(uint32_t cp) {
    if (cp > 0x10FFFFU || (cp >= 0xD800U && cp <= 0xDFFFU)) return UTF8_OVERLONG_SANITIZER_ERR_INVALID;
    return UTF8_OVERLONG_SANITIZER_OK;
}
