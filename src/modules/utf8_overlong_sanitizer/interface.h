#ifndef UTF8_OVERLONG_SANITIZER_INTERFACE_H
#define UTF8_OVERLONG_SANITIZER_INTERFACE_H

#include "types.h"
#include "errors.h"

utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_scan(const uint8_t* data, size_t len, utf8_san_report_t* report);
utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_is_scalar(uint32_t cp);
size_t utf8_overlong_sanitizer_scrub(const uint8_t* in, size_t len, uint8_t* out, size_t cap);
utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_verify_clean(const uint8_t* buf, size_t len);

#endif /* UTF8_OVERLONG_SANITIZER_INTERFACE_H */
