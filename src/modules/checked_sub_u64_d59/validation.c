#include "interface.h"

checked_sub_u64_d59_err_t checked_sub_u64_d59_validate_len(size_t n) {
    if (n == 0) {
        return CHECKED_SUB_U64_D59_ERR_INVALID;
    }
    return CHECKED_SUB_U64_D59_OK;
}
