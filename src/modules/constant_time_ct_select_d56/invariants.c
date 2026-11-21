#include "interface.h"

constant_time_ct_select_d56_err_t constant_time_ct_select_d56_verify_guard(bool cond) {
    if (!cond) {
        return CONSTANT_TIME_CT_SELECT_D56_ERR_INVARIANT;
    }
    return CONSTANT_TIME_CT_SELECT_D56_OK;
}
