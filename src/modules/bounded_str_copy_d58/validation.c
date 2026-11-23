#include "interface.h"

bounded_str_copy_d58_err_t bounded_str_copy_d58_validate_len(size_t n) {
    if (n == 0) {
        return BOUNDED_STR_COPY_D58_ERR_INVALID;
    }
    return BOUNDED_STR_COPY_D58_OK;
}
