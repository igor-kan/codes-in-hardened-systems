#ifndef CHECKED_MUL_ADD_I64_C_INTERFACE_H
#define CHECKED_MUL_ADD_I64_C_INTERFACE_H

#include "types.h"
#include "errors.h"

bool checked_add_i64(int64_t a, int64_t b, int64_t* out);
bool checked_mul_i64(int64_t a, int64_t b, int64_t* out);
int64_t saturating_add_i64(int64_t a, int64_t b);

checked_mul_add_i64_c_err_t checked_mul_add_i64_c_validate_len(size_t n);
uint64_t checked_mul_add_i64_c_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t checked_mul_add_i64_c_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
checked_mul_add_i64_c_err_t checked_mul_add_i64_c_verify_guard(bool cond);

#endif /* CHECKED_MUL_ADD_I64_C_INTERFACE_H */
