#include "interface.h"

double_fence_pool_d59_err_t double_fence_pool_d59_validate_len(size_t n) {
    if (n == 0) {
        return DOUBLE_FENCE_POOL_D59_ERR_INVALID;
    }
    return DOUBLE_FENCE_POOL_D59_OK;
}
