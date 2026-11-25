#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(slip_frame_codec_d60_validate_len(1) == SLIP_FRAME_CODEC_D60_OK);
    const uint8_t raw[4] = {0x01, 0xc0, 0xdb, 0x02};
    uint8_t enc[16], dec[16];
    size_t ne = slip_encode_d60(raw, 4, enc, 16), nd = 0;
    assert(ne == 8 && slip_decode_d60(enc, ne, dec, 16, &nd) && nd == 4);
    assert(memcmp(raw, dec, 4) == 0);
    assert(slip_frame_codec_d60_verify_guard(true) == SLIP_FRAME_CODEC_D60_OK);
    return 0;
}
