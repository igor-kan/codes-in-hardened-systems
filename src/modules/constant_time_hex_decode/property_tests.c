#include "interface.h"
#include <assert.h>

int main(void) {
    const char* strs[4] = {"00112233", "aabbccdd", "FFEEDDCC", "0123456789abcdef"};
    size_t lens[4] = {8, 8, 8, 16};
    assert(cthex_batch_decode_mt(strs, lens, 4, 2) == CONSTANT_TIME_HEX_DECODE_OK);
    uint8_t all[256];
    for (int i = 0; i < 256; ++i) all[i] = (uint8_t)i;
    assert(cthex_verify_invariants(all, 256) == CONSTANT_TIME_HEX_DECODE_OK);
    return 0;
}
