#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(crc16_ccitt_false_d57_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t p1[3] = {10, 20, 30};
    const uint8_t p2[3] = {10, 20, 31};
    assert(crc16_ccitt_false(p1, 3) != crc16_ccitt_false(p2, 3));
    return 0;
}
