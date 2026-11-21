#ifndef FLETCHER32_DUAL_ACC_D56_INTERFACE_H
#define FLETCHER32_DUAL_ACC_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t fletcher32_words(const uint16_t *words, size_t n);

fletcher32_dual_acc_d56_err_t fletcher32_dual_acc_d56_validate_len(size_t n);
uint64_t fletcher32_dual_acc_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t fletcher32_dual_acc_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
fletcher32_dual_acc_d56_err_t fletcher32_dual_acc_d56_verify_guard(bool cond);

#endif /* FLETCHER32_DUAL_ACC_D56_INTERFACE_H */
