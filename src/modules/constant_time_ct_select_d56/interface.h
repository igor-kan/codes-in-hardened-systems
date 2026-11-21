#ifndef CONSTANT_TIME_CT_SELECT_D56_INTERFACE_H
#define CONSTANT_TIME_CT_SELECT_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

uint64_t ct_select_u64(uint32_t cond, uint64_t a, uint64_t b);
int ct_mem_equal(const uint8_t *a, const uint8_t *b, size_t len);

constant_time_ct_select_d56_err_t constant_time_ct_select_d56_validate_len(size_t n);
uint64_t constant_time_ct_select_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t constant_time_ct_select_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
constant_time_ct_select_d56_err_t constant_time_ct_select_d56_verify_guard(bool cond);

#endif /* CONSTANT_TIME_CT_SELECT_D56_INTERFACE_H */
