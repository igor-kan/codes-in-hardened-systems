#ifndef SIGNED_CHECKED_NARROWING_INTERFACE_H
#define SIGNED_CHECKED_NARROWING_INTERFACE_H

#include "types.h"
#include "errors.h"

signed_checked_narrowing_err_t signed_checked_narrowing_i64_to_i32(int64_t val, int32_t* out);
signed_checked_narrowing_err_t signed_checked_narrowing_i64_to_size(int64_t val, size_t* out);
signed_checked_narrowing_err_t signed_checked_narrowing_mul_size(size_t a, size_t b, size_t* out);
signed_checked_narrowing_err_t signed_checked_narrowing_add_i64(int64_t a, int64_t b, int64_t* out);
signed_checked_narrowing_err_t signed_checked_narrowing_align_up(size_t val, size_t align, size_t* out);
signed_checked_narrowing_err_t signed_checked_narrowing_verify_bounds(int64_t val);

#endif /* SIGNED_CHECKED_NARROWING_INTERFACE_H */
