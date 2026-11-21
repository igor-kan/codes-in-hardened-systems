#include "interface.h"

constant_time_ct_select_d56_err_t constant_time_ct_select_d56_validate_len(size_t n) {
    if (n == 0) {
        return CONSTANT_TIME_CT_SELECT_D56_ERR_INVALID;
    }
    return CONSTANT_TIME_CT_SELECT_D56_OK;
}
