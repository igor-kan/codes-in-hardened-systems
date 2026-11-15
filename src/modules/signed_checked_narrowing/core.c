#include "interface.h"

signed_checked_narrowing_err_t signed_checked_narrowing_i64_to_i32(int64_t val, int32_t* out) {
    if (!out) return SIGNED_CHECKED_NARROWING_ERR_NULL;
    if (val < INT32_MIN || val > INT32_MAX) return SIGNED_CHECKED_NARROWING_ERR_OVERFLOW;
    *out = (int32_t)val;
    return SIGNED_CHECKED_NARROWING_OK;
}

signed_checked_narrowing_err_t signed_checked_narrowing_i64_to_size(int64_t val, size_t* out) {
    if (!out) return SIGNED_CHECKED_NARROWING_ERR_NULL;
    if (val < 0 || (uint64_t)val > (uint64_t)SIZE_MAX) return SIGNED_CHECKED_NARROWING_ERR_OVERFLOW;
    *out = (size_t)val;
    return SIGNED_CHECKED_NARROWING_OK;
}

signed_checked_narrowing_err_t signed_checked_narrowing_mul_size(size_t a, size_t b, size_t* out) {
    if (!out) return SIGNED_CHECKED_NARROWING_ERR_NULL;
    if (b != 0 && a > SIZE_MAX / b) return SIGNED_CHECKED_NARROWING_ERR_OVERFLOW;
    *out = a * b;
    return SIGNED_CHECKED_NARROWING_OK;
}

signed_checked_narrowing_err_t signed_checked_narrowing_add_i64(int64_t a, int64_t b, int64_t* out) {
    if (!out) return SIGNED_CHECKED_NARROWING_ERR_NULL;
    if ((b > 0 && a > INT64_MAX - b) || (b < 0 && a < INT64_MIN - b)) {
        return SIGNED_CHECKED_NARROWING_ERR_OVERFLOW;
    }
    *out = a + b;
    return SIGNED_CHECKED_NARROWING_OK;
}

signed_checked_narrowing_err_t signed_checked_narrowing_align_up(size_t val, size_t align, size_t* out) {
    if (!out) return SIGNED_CHECKED_NARROWING_ERR_NULL;
    if (align == 0 || (align & (align - 1)) != 0) return SIGNED_CHECKED_NARROWING_ERR_INVALID;
    size_t mask = align - 1;
    if (val > SIZE_MAX - mask) return SIGNED_CHECKED_NARROWING_ERR_OVERFLOW;
    *out = (val + mask) & ~mask;
    return SIGNED_CHECKED_NARROWING_OK;
}
