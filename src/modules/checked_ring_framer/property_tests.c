#include "interface.h"
#include <assert.h>

int main(void) {
    const uint8_t a[9] = {'1','2','3','4','5','6','7','8','9'};
    uint32_t out[2] = {0};
    parallel_crc_tags(a, 9, a, 9, out);
    assert(out[0] == 0xCBF43926U && out[1] == 0xCBF43926U);
    return 0;
}
