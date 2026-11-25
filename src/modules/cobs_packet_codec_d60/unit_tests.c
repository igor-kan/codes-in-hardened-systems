#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(cobs_packet_codec_d60_validate_len(1) == COBS_PACKET_CODEC_D60_OK);
    const uint8_t raw[6] = {0x11, 0x00, 0x22, 0x00, 0x00, 0x33};
    uint8_t enc[16], dec[16];
    size_t ne = cobs_encode_d60(raw, 6, enc, 16), nd = 0;
    for (size_t i = 0; i < ne; ++i) assert(enc[i] != 0);
    assert(cobs_decode_d60(enc, ne, dec, 16, &nd) && nd == 6 && memcmp(raw, dec, 6) == 0);
    assert(cobs_packet_codec_d60_verify_guard(true) == COBS_PACKET_CODEC_D60_OK);
    return 0;
}
