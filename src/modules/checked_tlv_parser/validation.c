#include "interface.h"
checked_tlv_parser_err_t checked_tlv_parser_validate_frame(const uint8_t* buf, size_t len) {
    size_t leaves = 0;
    return checked_tlv_parser_walk(buf, len, 0, &leaves);
}
