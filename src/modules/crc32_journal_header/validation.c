#include "interface.h"

crc32_journal_header_err_t jhdr_validate_sizes(size_t frame_len, size_t max_payload) {
    if (frame_len < JHDR_SIZE || frame_len - JHDR_SIZE > max_payload) return CRC32_JOURNAL_HEADER_ERR_BOUNDS;
    return CRC32_JOURNAL_HEADER_OK;
}
