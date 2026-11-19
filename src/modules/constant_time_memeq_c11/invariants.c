#include "interface.h"

constant_time_memeq_c11_err_t constant_time_memeq_c11_verify_guard(bool cond) {
    if (!cond) {
        return CONSTANT_TIME_MEMEQ_C11_ERR_INVARIANT;
    }
    return CONSTANT_TIME_MEMEQ_C11_OK;
}
