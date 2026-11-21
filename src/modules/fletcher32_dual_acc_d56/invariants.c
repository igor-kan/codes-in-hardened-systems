#include "interface.h"

fletcher32_dual_acc_d56_err_t fletcher32_dual_acc_d56_verify_guard(bool cond) {
    if (!cond) {
        return FLETCHER32_DUAL_ACC_D56_ERR_INVARIANT;
    }
    return FLETCHER32_DUAL_ACC_D56_OK;
}
