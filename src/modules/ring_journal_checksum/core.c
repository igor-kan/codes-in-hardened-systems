#include "interface.h"
#include <string.h>

uint32_t ring_journal_checksum_crc32(const uint8_t* p, size_t n) {
    uint32_t crc = 0xFFFFFFFFU;
    for (size_t i = 0; i < n; ++i) {
        crc ^= p[i];
        for (int b = 0; b < 8; ++b) {
            uint32_t mask = (uint32_t)(-(int32_t)(crc & 1U));
            crc = (crc >> 1) ^ (0xEDB88320U & mask);
        }
    }
    return ~crc;
}

static uint32_t entry_crc(uint64_t seq, uint32_t len, const uint8_t* data) {
    uint8_t hdr[12 + JOURNAL_MAX_DATA];
    memcpy(hdr, &seq, 8);
    memcpy(hdr + 8, &len, 4);
    if (len) memcpy(hdr + 12, data, len);
    return ring_journal_checksum_crc32(hdr, 12U + len);
}

void ring_journal_checksum_init(journal_ring_t* j) {
    if (!j) return;
    memset(j, 0, sizeof(*j));
    j->next_seq = 1;
}

ring_journal_checksum_err_t ring_journal_checksum_append(journal_ring_t* j, const uint8_t* payload, size_t len) {
    if (!j || (len > 0 && !payload)) return RING_JOURNAL_CHECKSUM_ERR_NULL;
    if (len > JOURNAL_MAX_DATA) return RING_JOURNAL_CHECKSUM_ERR_BOUNDS;
    uint64_t seq = j->next_seq++;
    journal_entry_t* e = &j->entries[seq % JOURNAL_SLOTS];
    e->seq = seq;
    e->len = (uint32_t)len;
    if (len) memcpy(e->data, payload, len);
    e->crc32 = entry_crc(seq, (uint32_t)len, e->data);
    return RING_JOURNAL_CHECKSUM_OK;
}

ring_journal_checksum_err_t ring_journal_checksum_verify_slot(const journal_ring_t* j, uint64_t seq, uint8_t* out, size_t* out_len) {
    if (!j) return RING_JOURNAL_CHECKSUM_ERR_NULL;
    const journal_entry_t* e = &j->entries[seq % JOURNAL_SLOTS];
    if (e->seq != seq || e->len > JOURNAL_MAX_DATA) return RING_JOURNAL_CHECKSUM_ERR_INVARIANT;
    if (entry_crc(e->seq, e->len, e->data) != e->crc32) return RING_JOURNAL_CHECKSUM_ERR_INVARIANT;
    if (out && e->len) memcpy(out, e->data, e->len);
    if (out_len) *out_len = e->len;
    return RING_JOURNAL_CHECKSUM_OK;
}
