#ifndef SAFE_SLICE_BOUNDS_D59_INTERFACE_H
#define SAFE_SLICE_BOUNDS_D59_INTERFACE_H

#include "types.h"
#include "errors.h"

int validate_slice_range(size_t total_len, size_t offset, size_t len);

safe_slice_bounds_d59_err_t safe_slice_bounds_d59_validate_len(size_t n);
uint64_t safe_slice_bounds_d59_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t safe_slice_bounds_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
safe_slice_bounds_d59_err_t safe_slice_bounds_d59_verify_guard(bool cond);

#endif /* SAFE_SLICE_BOUNDS_D59_INTERFACE_H */
