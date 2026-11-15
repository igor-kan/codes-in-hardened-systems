#ifndef CHECKED_TLV_PARSER_TYPES_H
#define CHECKED_TLV_PARSER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define TLV_MAX_DEPTH 16U
#define TLV_TAG_CONSTRUCTED 0x8000U
typedef struct {
    uint16_t tag;
    uint32_t length;
    const uint8_t* value;
    uint8_t is_container;
} tlv_item_t;

#endif /* CHECKED_TLV_PARSER_TYPES_H */
