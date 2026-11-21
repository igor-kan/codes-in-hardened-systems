#ifndef OVERFLOW_CHECKED_ARITH_D56_INTERFACE_H
#define OVERFLOW_CHECKED_ARITH_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

int safe_add_u64(uint64_t a, uint64_t b, uint64_t *out);
int safe_mul_u64(uint64_t a, uint64_t b, uint64_t *out);
uint64_t sat_add_u64(uint64_t a, uint64_t b);

overflow_checked_arith_d56_err_t overflow_checked_arith_d56_validate_len(size_t n);
uint64_t overflow_checked_arith_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t overflow_checked_arith_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
overflow_checked_arith_d56_err_t overflow_checked_arith_d56_verify_guard(bool cond);

#endif /* OVERFLOW_CHECKED_ARITH_D56_INTERFACE_H */
