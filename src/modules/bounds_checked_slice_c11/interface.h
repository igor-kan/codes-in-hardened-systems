#ifndef BOUNDS_CHECKED_SLICE_C11_INTERFACE_H
#define BOUNDS_CHECKED_SLICE_C11_INTERFACE_H

#include "types.h"
#include "errors.h"

bool safe_subslice(safe_span_t src, size_t off, size_t len, safe_span_t* out);
bool safe_nonoverlap_copy(uint8_t* dst, size_t dst_cap, const uint8_t* src, size_t n);

bounds_checked_slice_c11_err_t bounds_checked_slice_c11_validate_len(size_t n);
uint64_t bounds_checked_slice_c11_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t bounds_checked_slice_c11_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
bounds_checked_slice_c11_err_t bounds_checked_slice_c11_verify_guard(bool cond);

#endif /* BOUNDS_CHECKED_SLICE_C11_INTERFACE_H */
