#include "interface.h"

ct_u64_compare_d60_err_t ct_u64_compare_d60_verify_guard(bool cond) {
    if (!cond) {
        return CT_U64_COMPARE_D60_ERR_INVARIANT;
    }
    return CT_U64_COMPARE_D60_OK;
}
