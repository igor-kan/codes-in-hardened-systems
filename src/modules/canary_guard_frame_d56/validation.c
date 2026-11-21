#include "interface.h"

canary_guard_frame_d56_err_t canary_guard_frame_d56_validate_len(size_t n) {
    if (n == 0) {
        return CANARY_GUARD_FRAME_D56_ERR_INVALID;
    }
    return CANARY_GUARD_FRAME_D56_OK;
}
