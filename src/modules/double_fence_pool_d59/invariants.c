#include "interface.h"

double_fence_pool_d59_err_t double_fence_pool_d59_verify_guard(bool cond) {
    if (!cond) {
        return DOUBLE_FENCE_POOL_D59_ERR_INVARIANT;
    }
    return DOUBLE_FENCE_POOL_D59_OK;
}
