#include "interface.h"

redzone_canary_buf_d57_err_t redzone_canary_buf_d57_validate_len(size_t n) {
    if (n == 0) {
        return REDZONE_CANARY_BUF_D57_ERR_INVALID;
    }
    return REDZONE_CANARY_BUF_D57_OK;
}
