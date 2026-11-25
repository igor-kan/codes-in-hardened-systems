#include "interface.h"

cobs_packet_codec_d60_err_t cobs_packet_codec_d60_validate_len(size_t n) {
    if (n == 0) {
        return COBS_PACKET_CODEC_D60_ERR_INVALID;
    }
    return COBS_PACKET_CODEC_D60_OK;
}
