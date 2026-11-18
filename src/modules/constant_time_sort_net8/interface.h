#ifndef CONSTANT_TIME_SORT_NET8_INTERFACE_H
#define CONSTANT_TIME_SORT_NET8_INTERFACE_H

#include "types.h"
#include "errors.h"

void ct_cswap_i64(int64_t* a, int64_t* b);
void ct_sort_net8(int64_t x[8]);

constant_time_sort_net8_err_t constant_time_sort_net8_validate_len(size_t n);
uint64_t constant_time_sort_net8_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t constant_time_sort_net8_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
constant_time_sort_net8_err_t constant_time_sort_net8_verify_guard(bool cond);

#endif /* CONSTANT_TIME_SORT_NET8_INTERFACE_H */
