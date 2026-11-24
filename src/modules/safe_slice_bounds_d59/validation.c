#include "interface.h"

safe_slice_bounds_d59_err_t safe_slice_bounds_d59_validate_len(size_t n) {
    if (n == 0) {
        return SAFE_SLICE_BOUNDS_D59_ERR_INVALID;
    }
    return SAFE_SLICE_BOUNDS_D59_OK;
}
