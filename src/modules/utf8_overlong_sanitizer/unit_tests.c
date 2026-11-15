#include "interface.h"
#include <assert.h>

int main(void) {
    utf8_san_report_t rep;
    const uint8_t ok[] = {'a', 0xC3, 0xA9, 0xE2, 0x82, 0xAC, 0xF0, 0x9F, 0x98, 0x80};
    assert(utf8_overlong_sanitizer_scan(ok, sizeof(ok), &rep) == UTF8_OVERLONG_SANITIZER_OK);
    assert(rep.valid && rep.codepoints == 4);

    // Overlong 3-byte E0 80 AF
    const uint8_t ov[] = {0xE0, 0x80, 0xAF};
    assert(utf8_overlong_sanitizer_scan(ov, 3, &rep) == UTF8_OVERLONG_SANITIZER_ERR_INVALID);
    // Out-of-range F4 90 80 80 (U+110000)
    const uint8_t oor[] = {0xF4, 0x90, 0x80, 0x80};
    assert(utf8_overlong_sanitizer_scan(oor, 4, &rep) == UTF8_OVERLONG_SANITIZER_ERR_INVALID);
    return 0;
}
