#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(slip_frame_codec_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t malformed[2] = {0x05, 0xdb};
    uint8_t dec[8]; size_t nd = 0;
    assert(!slip_decode_d60(malformed, 2, dec, 8, &nd));
    return 0;
}
