#include "interface.h"
#include <assert.h>

int main(void) {
    // Constructed container (0x8001, len=9) holding leaf (0x0002, len=3, "abc")
    const uint8_t frame[] = {
        0x80, 0x01, 0, 0, 0, 9,
          0x00, 0x02, 0, 0, 0, 3, 'a', 'b', 'c'
    };
    size_t leaves = 0;
    assert(checked_tlv_parser_walk(frame, sizeof(frame), 0, &leaves) == CHECKED_TLV_PARSER_OK);
    assert(leaves == 1);

    // Malicious overflow length: 0xFFFFFFFF must fail cleanly
    const uint8_t bad[] = {0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x41};
    assert(checked_tlv_parser_validate_frame(bad, sizeof(bad)) == CHECKED_TLV_PARSER_ERR_OVERFLOW);
    return 0;
}
