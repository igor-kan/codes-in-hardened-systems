#include "interface.h"

checked_mul_add_i64_c_err_t checked_mul_add_i64_c_verify_guard(bool cond) {
    if (!cond) {
        return CHECKED_MUL_ADD_I64_C_ERR_INVARIANT;
    }
    return CHECKED_MUL_ADD_I64_C_OK;
}
