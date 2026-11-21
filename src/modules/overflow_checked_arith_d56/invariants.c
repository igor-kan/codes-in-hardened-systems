#include "interface.h"

overflow_checked_arith_d56_err_t overflow_checked_arith_d56_verify_guard(bool cond) {
    if (!cond) {
        return OVERFLOW_CHECKED_ARITH_D56_ERR_INVARIANT;
    }
    return OVERFLOW_CHECKED_ARITH_D56_OK;
}
