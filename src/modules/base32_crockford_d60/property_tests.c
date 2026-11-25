#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(base32_crockford_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const char* aliased = "oI-lL";
    uint8_t out[4]; size_t nd = 0;
    assert(b32_crockford_decode_d60(aliased, 5, out, 4, &nd) && nd == 2);
    return 0;
}
