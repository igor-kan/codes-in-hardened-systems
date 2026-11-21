#include "interface.h"

fletcher32_dual_acc_d56_err_t fletcher32_dual_acc_d56_validate_len(size_t n) {
    if (n == 0) {
        return FLETCHER32_DUAL_ACC_D56_ERR_INVALID;
    }
    return FLETCHER32_DUAL_ACC_D56_OK;
}
