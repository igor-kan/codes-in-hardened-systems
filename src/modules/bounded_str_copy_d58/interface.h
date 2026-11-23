#ifndef BOUNDED_STR_COPY_D58_INTERFACE_H
#define BOUNDED_STR_COPY_D58_INTERFACE_H

#include "types.h"
#include "errors.h"

int safe_cstr_copy(char *dst, size_t cap, const char *src, size_t *written);

bounded_str_copy_d58_err_t bounded_str_copy_d58_validate_len(size_t n);
uint64_t bounded_str_copy_d58_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t bounded_str_copy_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
bounded_str_copy_d58_err_t bounded_str_copy_d58_verify_guard(bool cond);

#endif /* BOUNDED_STR_COPY_D58_INTERFACE_H */
