#include "interface.h"

redzone_canary_buf_d57_err_t redzone_canary_buf_d57_verify_guard(bool cond) {
    if (!cond) {
        return REDZONE_CANARY_BUF_D57_ERR_INVARIANT;
    }
    return REDZONE_CANARY_BUF_D57_OK;
}
