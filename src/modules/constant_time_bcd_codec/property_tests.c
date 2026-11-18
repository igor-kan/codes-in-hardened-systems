#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(constant_time_bcd_codec_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint8_t z[1] = {0x99}; uint64_t v = 0;
    assert(ct_bcd_decode_u64(z, 1, &v) && v == 99ULL);
    return 0;
}
