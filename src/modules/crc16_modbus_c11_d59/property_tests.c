#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(crc16_modbus_c11_d59_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    const uint8_t a[2] = {0x01u, 0x03u}, b[2] = {0x01u, 0x04u};
    assert(crc16_modbus(a, 2) != crc16_modbus(b, 2));
    return 0;
}
