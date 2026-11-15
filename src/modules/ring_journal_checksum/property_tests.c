#include "interface.h"
#include <assert.h>

int main(void) {
    journal_ring_t j; ring_journal_checksum_init(&j);
    for (uint64_t seq = 1; seq <= 60; ++seq) {
        uint8_t msg[4] = {(uint8_t)seq, 1, 2, 3};
        assert(ring_journal_checksum_append(&j, msg, 4) == RING_JOURNAL_CHECKSUM_OK);
    }
    // Latest 32 entries must verify; overwritten old entries must reject seq mismatch
    assert(ring_journal_checksum_verify_slot(&j, 60, NULL, NULL) == RING_JOURNAL_CHECKSUM_OK);
    assert(ring_journal_checksum_verify_slot(&j, 1, NULL, NULL) == RING_JOURNAL_CHECKSUM_ERR_INVARIANT);
    return 0;
}
