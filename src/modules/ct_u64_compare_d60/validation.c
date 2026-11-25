#include "interface.h"

ct_u64_compare_d60_err_t ct_u64_compare_d60_validate_len(size_t n) {
    if (n == 0) {
        return CT_U64_COMPARE_D60_ERR_INVALID;
    }
    return CT_U64_COMPARE_D60_OK;
}
