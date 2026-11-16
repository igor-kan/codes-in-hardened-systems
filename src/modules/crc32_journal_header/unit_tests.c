#include "interface.h"
#include <assert.h>

int main(void) {
    const uint8_t pay[] = "hardened_record_01";
    assert(jhdr_verify_invariants(pay, sizeof(pay)) == CRC32_JOURNAL_HEADER_OK);
    uint8_t frame[64];
    size_t fl = 0;
    assert(jhdr_seal(2, 7, pay, sizeof(pay), frame, sizeof(frame), &fl) == CRC32_JOURNAL_HEADER_OK);
    jhdr_t hdr;
    assert(jhdr_verify_frame(frame, fl, 128, &hdr) == CRC32_JOURNAL_HEADER_OK);
    assert(hdr.version == 2 && hdr.flags == 7 && hdr.payload_len == sizeof(pay));
    frame[fl - 1] ^= 0x80U;
    assert(jhdr_verify_frame(frame, fl, 128, &hdr) == CRC32_JOURNAL_HEADER_ERR_INVARIANT);
    return 0;
}
