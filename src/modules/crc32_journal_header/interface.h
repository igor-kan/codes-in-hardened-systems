#ifndef CRC32_JOURNAL_HEADER_INTERFACE_H
#define CRC32_JOURNAL_HEADER_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t jhdr_crc32(const uint8_t* data, size_t len);
crc32_journal_header_err_t jhdr_seal(uint16_t version, uint16_t flags, const uint8_t* payload, size_t payload_len, uint8_t* frame_out, size_t cap, size_t* total_len);
crc32_journal_header_err_t jhdr_verify_frame(const uint8_t* frame, size_t frame_len, size_t max_payload, jhdr_t* hdr_out);
crc32_journal_header_err_t jhdr_validate_sizes(size_t frame_len, size_t max_payload);
crc32_journal_header_err_t jhdr_batch_verify_mt(const uint8_t** frames, const size_t* lens, size_t max_payload, size_t count, size_t num_threads);
crc32_journal_header_err_t jhdr_verify_invariants(const uint8_t* payload, size_t len);

#endif /* CRC32_JOURNAL_HEADER_INTERFACE_H */
