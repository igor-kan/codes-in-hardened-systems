#include "interface.h"

checked_tlv_parser_err_t checked_tlv_parser_next(const uint8_t* buf, size_t len, size_t* cursor, tlv_item_t* item) {
    if (!buf || !cursor || !item) return CHECKED_TLV_PARSER_ERR_NULL;
    size_t pos = *cursor;
    if (pos > len || len - pos < 6U) return CHECKED_TLV_PARSER_ERR_BOUNDS;
    uint16_t tag = (uint16_t)(((uint16_t)buf[pos] << 8) | buf[pos + 1]);
    uint32_t flen = ((uint32_t)buf[pos+2] << 24) | ((uint32_t)buf[pos+3] << 16) |
                    ((uint32_t)buf[pos+4] << 8) | (uint32_t)buf[pos+5];
    size_t payload_off = pos + 6U;
    if ((size_t)flen > len - payload_off) return CHECKED_TLV_PARSER_ERR_OVERFLOW;
    item->tag = tag;
    item->length = flen;
    item->value = buf + payload_off;
    item->is_container = (tag & TLV_TAG_CONSTRUCTED) ? 1U : 0U;
    *cursor = payload_off + (size_t)flen;
    return CHECKED_TLV_PARSER_OK;
}

checked_tlv_parser_err_t checked_tlv_parser_walk(const uint8_t* buf, size_t len, uint32_t depth, size_t* total_leaves) {
    if (!buf || !total_leaves) return CHECKED_TLV_PARSER_ERR_NULL;
    if (depth > TLV_MAX_DEPTH) return CHECKED_TLV_PARSER_ERR_INVALID;
    size_t cur = 0;
    while (cur < len) {
        tlv_item_t item;
        checked_tlv_parser_err_t e = checked_tlv_parser_next(buf, len, &cur, &item);
        if (e != CHECKED_TLV_PARSER_OK) return e;
        if (item.is_container) {
            e = checked_tlv_parser_walk(item.value, item.length, depth + 1, total_leaves);
            if (e != CHECKED_TLV_PARSER_OK) return e;
        } else {
            (*total_leaves)++;
        }
    }
    return CHECKED_TLV_PARSER_OK;
}
