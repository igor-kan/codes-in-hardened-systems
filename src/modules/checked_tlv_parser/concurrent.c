#include "interface.h"
checked_tlv_parser_err_t checked_tlv_parser_batch(const uint8_t** frames, const size_t* lens, size_t k) {
    for (size_t i = 0; i < k; ++i) {
        checked_tlv_parser_err_t e = checked_tlv_parser_validate_frame(frames[i], lens[i]);
        if (e != CHECKED_TLV_PARSER_OK) return e;
    }
    return CHECKED_TLV_PARSER_OK;
}
