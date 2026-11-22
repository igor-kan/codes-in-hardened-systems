#ifndef SATURATING_I32_MATH_D57_INTERFACE_H
#define SATURATING_I32_MATH_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

int32_t sat_add_i32(int32_t a, int32_t b);
int32_t sat_sub_i32(int32_t a, int32_t b);
int32_t sat_neg_i32(int32_t a);

saturating_i32_math_d57_err_t saturating_i32_math_d57_validate_len(size_t n);
uint64_t saturating_i32_math_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t saturating_i32_math_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
saturating_i32_math_d57_err_t saturating_i32_math_d57_verify_guard(bool cond);

#endif /* SATURATING_I32_MATH_D57_INTERFACE_H */
