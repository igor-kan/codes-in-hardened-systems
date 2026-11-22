#include "interface.h"

saturating_i32_math_d57_err_t saturating_i32_math_d57_validate_len(size_t n) {
    if (n == 0) {
        return SATURATING_I32_MATH_D57_ERR_INVALID;
    }
    return SATURATING_I32_MATH_D57_OK;
}
