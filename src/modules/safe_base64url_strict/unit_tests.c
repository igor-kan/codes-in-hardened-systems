#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    const uint8_t raw[4] = {0xFA, 0xFB, 0xFC, 0x01};
    char enc[16];
    size_t el = 0, dl = 0;
    assert(b64u_encode(raw, 4, enc, sizeof(enc), &el) == SAFE_BASE64URL_STRICT_OK);
    uint8_t dec[16];
    assert(b64u_decode_strict(enc, el, dec, sizeof(dec), &dl) == SAFE_BASE64URL_STRICT_OK && dl == 4);
    assert(memcmp(raw, dec, 4) == 0);
    // Non-canonical trailing bit test: "AB" has 0 remainder bits unless bottom 4 bits set ("AB" -> 'B'=1 != 0)
    assert(b64u_decode_strict("AB", 2, dec, sizeof(dec), &dl) == SAFE_BASE64URL_STRICT_ERR_INVALID);
    return 0;
}
