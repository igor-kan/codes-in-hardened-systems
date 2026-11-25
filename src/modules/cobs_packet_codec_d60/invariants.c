#include "interface.h"

cobs_packet_codec_d60_err_t cobs_packet_codec_d60_verify_guard(bool cond) {
    if (!cond) {
        return COBS_PACKET_CODEC_D60_ERR_INVARIANT;
    }
    return COBS_PACKET_CODEC_D60_OK;
}
