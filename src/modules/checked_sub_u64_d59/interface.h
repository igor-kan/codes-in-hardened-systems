#ifndef CHECKED_SUB_U64_D59_INTERFACE_H
#define CHECKED_SUB_U64_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

int safe_sub_u64(uint64_t a, uint64_t b, uint64_t *out);
uint64_t sat_sub_u64(uint64_t a, uint64_t b);

checked_sub_u64_d59_err_t checked_sub_u64_d59_validate_len(size_t n);
uint64_t checked_sub_u64_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t checked_sub_u64_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
checked_sub_u64_d59_err_t checked_sub_u64_d59_verify_guard(bool cond);

#endif /* CHECKED_SUB_U64_D59_INTERFACE_H */
