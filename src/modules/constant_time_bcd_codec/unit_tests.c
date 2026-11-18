#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(constant_time_bcd_codec_validate_len(1) == CONSTANT_TIME_BCD_CODEC_OK);
    uint8_t good[3] = {0x12, 0x34, 0x56}, bad[2] = {0x12, 0x3a};
    uint64_t v = 0;
    assert(ct_bcd_decode_u64(good, 3, &v) && v == 123456ULL);
    assert(!ct_bcd_decode_u64(bad, 2, &v) && v == 0ULL);
    assert(constant_time_bcd_codec_verify_guard(true) == CONSTANT_TIME_BCD_CODEC_OK);
    return 0;
}
