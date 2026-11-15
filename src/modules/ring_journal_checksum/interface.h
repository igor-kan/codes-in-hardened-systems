#ifndef RING_JOURNAL_CHECKSUM_INTERFACE_H
#define RING_JOURNAL_CHECKSUM_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t ring_journal_checksum_crc32(const uint8_t* p, size_t n);
void ring_journal_checksum_init(journal_ring_t* j);
ring_journal_checksum_err_t ring_journal_checksum_append(journal_ring_t* j, const uint8_t* payload, size_t len);
ring_journal_checksum_err_t ring_journal_checksum_verify_slot(const journal_ring_t* j, uint64_t seq, uint8_t* out, size_t* out_len);

#endif /* RING_JOURNAL_CHECKSUM_INTERFACE_H */
