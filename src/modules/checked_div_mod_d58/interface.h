#ifndef CHECKED_DIV_MOD_D58_INTERFACE_H
#define CHECKED_DIV_MOD_D58_INTERFACE_H

#include "types.h"
#include "errors.h"

int safe_div_i64(int64_t a, int64_t b, int64_t *q, int64_t *r);

checked_div_mod_d58_err_t checked_div_mod_d58_validate_len(size_t n);
uint64_t checked_div_mod_d58_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t checked_div_mod_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
checked_div_mod_d58_err_t checked_div_mod_d58_verify_guard(bool cond);

#endif /* CHECKED_DIV_MOD_D58_INTERFACE_H */
