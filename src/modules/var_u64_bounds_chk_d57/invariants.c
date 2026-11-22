#include "interface.h"

var_u64_bounds_chk_d57_err_t var_u64_bounds_chk_d57_verify_guard(bool cond) {
    if (!cond) {
        return VAR_U64_BOUNDS_CHK_D57_ERR_INVARIANT;
    }
    return VAR_U64_BOUNDS_CHK_D57_OK;
}
