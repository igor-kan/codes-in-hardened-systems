#include "interface.h"
#include <stdlib.h>

crc32_journal_header_err_t jhdr_verify_invariants(const uint8_t* payload, size_t len) {
    uint8_t* f = (uint8_t*)malloc(JHDR_SIZE + len);
    if (!f) return CRC32_JOURNAL_HEADER_ERR_NULL;
    size_t fl = 0;
    if (jhdr_seal(1, 0, payload, len, f, JHDR_SIZE + len, &fl) != CRC32_JOURNAL_HEADER_OK) {
        free(f); return CRC32_JOURNAL_HEADER_ERR_INVARIANT;
    }
    jhdr_t out;
    if (jhdr_verify_frame(f, fl, len + 10U, &out) != CRC32_JOURNAL_HEADER_OK) {
        free(f); return CRC32_JOURNAL_HEADER_ERR_INVARIANT;
    }
    f[0] ^= 0x01U;
    if (jhdr_verify_frame(f, fl, len + 10U, &out) == CRC32_JOURNAL_HEADER_OK) {
        free(f); return CRC32_JOURNAL_HEADER_ERR_INVARIANT;
    }
    free(f);
    return CRC32_JOURNAL_HEADER_OK;
}
