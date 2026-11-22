#include "interface.h"

saturating_i32_math_d57_err_t saturating_i32_math_d57_verify_guard(bool cond) {
    if (!cond) {
        return SATURATING_I32_MATH_D57_ERR_INVARIANT;
    }
    return SATURATING_I32_MATH_D57_OK;
}
