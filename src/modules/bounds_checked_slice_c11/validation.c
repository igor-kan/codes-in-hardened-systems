#include "interface.h"

bounds_checked_slice_c11_err_t bounds_checked_slice_c11_validate_len(size_t n) {
    if (n == 0) {
        return BOUNDS_CHECKED_SLICE_C11_ERR_INVALID;
    }
    return BOUNDS_CHECKED_SLICE_C11_OK;
}
