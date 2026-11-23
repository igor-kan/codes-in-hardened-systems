#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(crc8_smbus_pec_d58_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t m1[2] = {0xAAu, 0xBBu};
    for (int bit = 0; bit < 8; ++bit) {
        uint8_t m2[2] = {(uint8_t)(m1[0] ^ (1u << bit)), m1[1]};
        assert(crc8_smbus(m1, 2) != crc8_smbus(m2, 2));
    }
    return 0;
}
