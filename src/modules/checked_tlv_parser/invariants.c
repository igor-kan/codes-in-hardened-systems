#include "interface.h"
checked_tlv_parser_err_t checked_tlv_parser_check_monotonic(const uint8_t* buf, size_t len) {
    size_t cur = 0, prev = 0;
    tlv_item_t it;
    while (cur < len) {
        checked_tlv_parser_err_t e = checked_tlv_parser_next(buf, len, &cur, &it);
        if (e != CHECKED_TLV_PARSER_OK) return e;
        if (cur <= prev) return CHECKED_TLV_PARSER_ERR_INVARIANT;
        prev = cur;
    }
    return CHECKED_TLV_PARSER_OK;
}
