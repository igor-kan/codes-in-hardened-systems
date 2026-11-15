#include "interface.h"
ring_journal_checksum_err_t ring_journal_checksum_validate_len(size_t len) {
    if (len > JOURNAL_MAX_DATA) return RING_JOURNAL_CHECKSUM_ERR_BOUNDS;
    return RING_JOURNAL_CHECKSUM_OK;
}
