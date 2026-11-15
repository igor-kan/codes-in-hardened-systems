#include "interface.h"
#include <assert.h>

int main(void) {
    uint8_t out[64];
    const uint8_t bad[8] = {'x', 0xFF, 0xC0, 0xAF, 'y', 0xED, 0xA0, 0x80};
    size_t w = utf8_overlong_sanitizer_scrub(bad, 8, out, 64);
    assert(w == 8 && utf8_overlong_sanitizer_verify_clean(out, w) == UTF8_OVERLONG_SANITIZER_OK);
    return 0;
}
