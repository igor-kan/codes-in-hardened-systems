#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(base32_crockford_d60_validate_len(1) == BASE32_CROCKFORD_D60_OK);
    const uint8_t raw[5] = {0x48, 0x65, 0x6c, 0x6c, 0x6f};
    char enc[16]; uint8_t dec[16]; size_t nd = 0;
    size_t ne = b32_crockford_encode_d60(raw, 5, enc, 16);
    assert(ne == 8 && b32_crockford_decode_d60(enc, ne, dec, 16, &nd) && nd == 5);
    assert(memcmp(raw, dec, 5) == 0);
    assert(base32_crockford_d60_verify_guard(true) == BASE32_CROCKFORD_D60_OK);
    return 0;
}
