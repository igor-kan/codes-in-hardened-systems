#include "interface.h"

bounded_str_copy_d58_err_t bounded_str_copy_d58_verify_guard(bool cond) {
    if (!cond) {
        return BOUNDED_STR_COPY_D58_ERR_INVARIANT;
    }
    return BOUNDED_STR_COPY_D58_OK;
}
