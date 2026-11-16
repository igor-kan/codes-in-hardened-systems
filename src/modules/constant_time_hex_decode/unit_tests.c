#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    const uint8_t raw[4] = {0xDE, 0xAD, 0xBE, 0xEF};
    char hex[16];
    assert(cthex_encode(raw, 4, hex, sizeof(hex)) == CONSTANT_TIME_HEX_DECODE_OK);
    assert(strcmp(hex, "deadbeef") == 0);
    uint8_t dec[8];
    size_t dl = 0;
    assert(cthex_decode("DeAdBeEf", 8, dec, sizeof(dec), &dl) == CONSTANT_TIME_HEX_DECODE_OK);
    assert(dl == 4 && memcmp(raw, dec, 4) == 0);
    assert(cthex_decode("deadbeeg", 8, dec, sizeof(dec), &dl) == CONSTANT_TIME_HEX_DECODE_ERR_INVALID);
    assert(cthex_verify_invariants(raw, 4) == CONSTANT_TIME_HEX_DECODE_OK);
    return 0;
}
