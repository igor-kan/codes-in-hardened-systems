#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(adler32_zlib_d58_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t x[2] = {10, 20}, y[2] = {20, 10};
    assert(adler32_compute(x, 2) != adler32_compute(y, 2));
    return 0;
}
