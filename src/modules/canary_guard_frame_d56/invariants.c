#include "interface.h"

canary_guard_frame_d56_err_t canary_guard_frame_d56_verify_guard(bool cond) {
    if (!cond) {
        return CANARY_GUARD_FRAME_D56_ERR_INVARIANT;
    }
    return CANARY_GUARD_FRAME_D56_OK;
}
