#include "interface.h"

var_u64_bounds_chk_d57_err_t var_u64_bounds_chk_d57_validate_len(size_t n) {
    if (n == 0) {
        return VAR_U64_BOUNDS_CHK_D57_ERR_INVALID;
    }
    return VAR_U64_BOUNDS_CHK_D57_OK;
}
