#include "interface.h"

checked_sub_u64_d59_err_t checked_sub_u64_d59_verify_guard(bool cond) {
    if (!cond) {
        return CHECKED_SUB_U64_D59_ERR_INVARIANT;
    }
    return CHECKED_SUB_U64_D59_OK;
}
