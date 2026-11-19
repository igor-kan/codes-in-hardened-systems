#include "interface.h"

constant_time_memeq_c11_err_t constant_time_memeq_c11_validate_len(size_t n) {
    if (n == 0) {
        return CONSTANT_TIME_MEMEQ_C11_ERR_INVALID;
    }
    return CONSTANT_TIME_MEMEQ_C11_OK;
}
