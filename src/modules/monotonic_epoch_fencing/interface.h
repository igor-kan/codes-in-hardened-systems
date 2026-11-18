#ifndef MONOTONIC_EPOCH_FENCING_INTERFACE_H
#define MONOTONIC_EPOCH_FENCING_INTERFACE_H

#include "types.h"
#include "errors.h"

void fenced_init(fenced_register_t* r, uint64_t initial_epoch);
bool fenced_write(fenced_register_t* r, uint64_t token_epoch, uint64_t val);

monotonic_epoch_fencing_err_t monotonic_epoch_fencing_validate_len(size_t n);
uint64_t monotonic_epoch_fencing_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t monotonic_epoch_fencing_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
monotonic_epoch_fencing_err_t monotonic_epoch_fencing_verify_guard(bool cond);

#endif /* MONOTONIC_EPOCH_FENCING_INTERFACE_H */
