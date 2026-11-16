#ifndef CHECKED_I64_MUL_DIV_INTERFACE_H
#define CHECKED_I64_MUL_DIV_INTERFACE_H

#include "types.h"
#include "errors.h"

checked_i64_mul_div_err_t checked_mul_i64(int64_t a, int64_t b, int64_t* out);
checked_i64_mul_div_err_t checked_div_i64(int64_t a, int64_t b, int64_t* out);
int64_t safe_midpoint_i64(int64_t a, int64_t b);
checked_i64_mul_div_err_t validate_div_pair(int64_t a, int64_t b);
int64_t saturating_mul_i64(int64_t a, int64_t b);
checked_i64_mul_div_err_t batch_checked_mul_mt(const int64_t* a, const int64_t* b, int64_t* out, uint8_t* ok_flags, size_t n, size_t num_threads);
checked_i64_mul_div_err_t verify_arith_invariants(int64_t a, int64_t b);

#endif /* CHECKED_I64_MUL_DIV_INTERFACE_H */
