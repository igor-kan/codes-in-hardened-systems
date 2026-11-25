#include "interface.h"

slip_frame_codec_d60_err_t slip_frame_codec_d60_verify_guard(bool cond) {
    if (!cond) {
        return SLIP_FRAME_CODEC_D60_ERR_INVARIANT;
    }
    return SLIP_FRAME_CODEC_D60_OK;
}
