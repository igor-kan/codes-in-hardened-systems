#include "interface.h"
signed_checked_narrowing_err_t signed_checked_narrowing_validate_pow2(size_t align) {
    if (align == 0 || (align & (align - 1)) != 0) return SIGNED_CHECKED_NARROWING_ERR_INVALID;
    return SIGNED_CHECKED_NARROWING_OK;
}
