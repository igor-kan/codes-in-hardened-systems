#ifndef CT_U64_COMPARE_D60_INTERFACE_H
#define CT_U64_COMPARE_D60_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t ct_memeq_d60(const uint8_t* a, const uint8_t* b, size_t n);
uint64_t ct_select_u64_d60(uint32_t cond, uint64_t if_true, uint64_t if_false);

ct_u64_compare_d60_err_t ct_u64_compare_d60_validate_len(size_t n);
uint64_t ct_u64_compare_d60_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t ct_u64_compare_d60_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
ct_u64_compare_d60_err_t ct_u64_compare_d60_verify_guard(bool cond);

#endif /* CT_U64_COMPARE_D60_INTERFACE_H */
