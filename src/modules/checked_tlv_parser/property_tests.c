#include "interface.h"
#include <assert.h>

int main(void) {
    // 18 levels of nested zero-length containers -> exceeds TLV_MAX_DEPTH(16)
    uint8_t deep[18 * 6];
    for (int d = 0; d < 18; ++d) {
        uint32_t rem = (uint32_t)((17 - d) * 6);
        deep[d*6] = 0x80; deep[d*6+1] = 0x01;
        deep[d*6+2] = 0; deep[d*6+3] = 0; deep[d*6+4] = 0; deep[d*6+5] = (uint8_t)rem;
    }
    size_t leaves = 0;
    assert(checked_tlv_parser_walk(deep, sizeof(deep), 0, &leaves) == CHECKED_TLV_PARSER_ERR_INVALID);
    return 0;
}
