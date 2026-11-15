#ifndef CHECKED_TLV_PARSER_INTERFACE_H
#define CHECKED_TLV_PARSER_INTERFACE_H

#include "types.h"
#include "errors.h"

checked_tlv_parser_err_t checked_tlv_parser_next(const uint8_t* buf, size_t len, size_t* cursor, tlv_item_t* item);
checked_tlv_parser_err_t checked_tlv_parser_walk(const uint8_t* buf, size_t len, uint32_t depth, size_t* total_leaves);
checked_tlv_parser_err_t checked_tlv_parser_validate_frame(const uint8_t* buf, size_t len);
size_t checked_tlv_parser_count_top_fast(const uint8_t* buf, size_t len);
checked_tlv_parser_err_t checked_tlv_parser_batch(const uint8_t** frames, const size_t* lens, size_t k);
checked_tlv_parser_err_t checked_tlv_parser_check_monotonic(const uint8_t* buf, size_t len);

#endif /* CHECKED_TLV_PARSER_INTERFACE_H */
