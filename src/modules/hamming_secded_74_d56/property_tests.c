#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(hamming_secded_74_d56_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    for (uint8_t nib = 0; nib < 16; ++nib) {
        uint8_t cw = hamming84_encode(nib);
        uint8_t out = 99;
        assert(hamming84_decode(cw, &out) == 0 && out == nib);
    }
    return 0;
}
