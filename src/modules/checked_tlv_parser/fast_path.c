#include "interface.h"
size_t checked_tlv_parser_count_top_fast(const uint8_t* buf, size_t len) {
    size_t cur = 0, cnt = 0;
    tlv_item_t it;
    while (cur < len && checked_tlv_parser_next(buf, len, &cur, &it) == CHECKED_TLV_PARSER_OK) cnt++;
    return (cur == len) ? cnt : 0;
}
