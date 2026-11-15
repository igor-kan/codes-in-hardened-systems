#include "interface.h"
#include <assert.h>
#include <string.h>

int main(void) {
    const uint8_t chk[9] = {'1','2','3','4','5','6','7','8','9'};
    assert(ring_journal_checksum_crc32(chk, 9) == 0xCBF43926U); // Official IEEE 802.3 CRC32 KAT

    journal_ring_t j; ring_journal_checksum_init(&j);
    assert(ring_journal_checksum_append(&j, (const uint8_t*)"commit-tx-1", 11) == RING_JOURNAL_CHECKSUM_OK);
    uint8_t out[48]; size_t olen = 0;
    assert(ring_journal_checksum_verify_slot(&j, 1, out, &olen) == RING_JOURNAL_CHECKSUM_OK);
    assert(olen == 11 && memcmp(out, "commit-tx-1", 11) == 0);
    // Corrupt 1 bit on disk -> must fail torn-write check
    j.entries[1 % JOURNAL_SLOTS].data[3] ^= 1U;
    assert(ring_journal_checksum_verify_slot(&j, 1, out, &olen) == RING_JOURNAL_CHECKSUM_ERR_INVARIANT);
    return 0;
}
