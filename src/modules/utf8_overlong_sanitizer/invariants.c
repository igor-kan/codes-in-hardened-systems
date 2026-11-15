#include "interface.h"
utf8_overlong_sanitizer_err_t utf8_overlong_sanitizer_verify_clean(const uint8_t* buf, size_t len) {
    utf8_san_report_t rep;
    utf8_overlong_sanitizer_err_t e = utf8_overlong_sanitizer_scan(buf, len, &rep);
    if (e == UTF8_OVERLONG_SANITIZER_OK && !rep.valid) return UTF8_OVERLONG_SANITIZER_ERR_INVARIANT;
    return e;
}
