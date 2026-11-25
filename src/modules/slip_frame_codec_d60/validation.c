#include "interface.h"

slip_frame_codec_d60_err_t slip_frame_codec_d60_validate_len(size_t n) {
    if (n == 0) {
        return SLIP_FRAME_CODEC_D60_ERR_INVALID;
    }
    return SLIP_FRAME_CODEC_D60_OK;
}
