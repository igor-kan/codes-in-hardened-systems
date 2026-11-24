#include "interface.h"

safe_slice_bounds_d59_err_t safe_slice_bounds_d59_verify_guard(bool cond) {
    if (!cond) {
        return SAFE_SLICE_BOUNDS_D59_ERR_INVARIANT;
    }
    return SAFE_SLICE_BOUNDS_D59_OK;
}
