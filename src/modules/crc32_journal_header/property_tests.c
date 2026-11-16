#include "interface.h"
#include <assert.h>

int main(void) {
    uint8_t f[4][64];
    const uint8_t* ptrs[4];
    size_t lens[4];
    uint8_t pay[32];
    for (int i = 0; i < 32; ++i) pay[i] = (uint8_t)i;
    for (int t = 0; t < 4; ++t) {
        jhdr_seal(1, (uint16_t)t, pay, (size_t)(8 * (t + 1)), f[t], 64, &lens[t]);
        ptrs[t] = f[t];
    }
    assert(jhdr_batch_verify_mt(ptrs, lens, 64, 4, 2) == CRC32_JOURNAL_HEADER_OK);
    return 0;
}
