#include "interface.h"

overflow_checked_arith_d56_err_t overflow_checked_arith_d56_validate_len(size_t n) {
    if (n == 0) {
        return OVERFLOW_CHECKED_ARITH_D56_ERR_INVALID;
    }
    return OVERFLOW_CHECKED_ARITH_D56_OK;
}
