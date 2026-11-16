#include "interface.h"
#include <assert.h>

int main(void) {
    uint8_t data[6][41];
    const uint8_t* ptrs[6];
    size_t lens[6] = {0, 1, 2, 3, 17, 41};
    for (int i = 0; i < 6; ++i) {
        for (size_t j = 0; j < 41; ++j) data[i][j] = (uint8_t)(i * 19 + j);
        ptrs[i] = data[i];
    }
    assert(b64u_batch_roundtrip_mt(ptrs, lens, 6, 3) == SAFE_BASE64URL_STRICT_OK);
    return 0;
}
