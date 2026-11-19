#include "interface.h"

bounds_checked_slice_c11_err_t bounds_checked_slice_c11_verify_guard(bool cond) {
    if (!cond) {
        return BOUNDS_CHECKED_SLICE_C11_ERR_INVARIANT;
    }
    return BOUNDS_CHECKED_SLICE_C11_OK;
}
