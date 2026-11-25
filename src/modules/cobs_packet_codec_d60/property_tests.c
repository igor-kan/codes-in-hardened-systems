#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(cobs_packet_codec_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t bad[2] = {0x05, 0x11};
    uint8_t dec[8]; size_t nd = 0;
    assert(!cobs_decode_d60(bad, 2, dec, 8, &nd));
    return 0;
}
