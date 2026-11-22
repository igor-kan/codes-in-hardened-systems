#ifndef VAR_U64_BOUNDS_CHK_D57_INTERFACE_H
#define VAR_U64_BOUNDS_CHK_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

int safe_array_bytes(size_t header_sz, size_t count, size_t elem_sz, size_t *out);

var_u64_bounds_chk_d57_err_t var_u64_bounds_chk_d57_validate_len(size_t n);
uint64_t var_u64_bounds_chk_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t var_u64_bounds_chk_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
var_u64_bounds_chk_d57_err_t var_u64_bounds_chk_d57_verify_guard(bool cond);

#endif /* VAR_U64_BOUNDS_CHK_D57_INTERFACE_H */
