#include "interface.h"

checked_mul_add_i64_c_err_t checked_mul_add_i64_c_validate_len(size_t n) {
    if (n == 0) {
        return CHECKED_MUL_ADD_I64_C_ERR_INVALID;
    }
    return CHECKED_MUL_ADD_I64_C_OK;
}
