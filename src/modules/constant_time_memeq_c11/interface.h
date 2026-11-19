#ifndef CONSTANT_TIME_MEMEQ_C11_INTERFACE_H
#define CONSTANT_TIME_MEMEQ_C11_INTERFACE_H

#include "types.h"
#include "errors.h"

bool ct_mem_equal(const uint8_t* a, const uint8_t* b, size_t n);

constant_time_memeq_c11_err_t constant_time_memeq_c11_validate_len(size_t n);
uint64_t constant_time_memeq_c11_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t constant_time_memeq_c11_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
constant_time_memeq_c11_err_t constant_time_memeq_c11_verify_guard(bool cond);

#endif /* CONSTANT_TIME_MEMEQ_C11_INTERFACE_H */
