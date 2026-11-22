#ifndef SEQLOCK_VERSION_GUARD_D57_INTERFACE_H
#define SEQLOCK_VERSION_GUARD_D57_INTERFACE_H

#include "types.h"
#include "errors.h"

void seqlock_write(seqlock_pair_t *sl, uint64_t a, uint64_t b);
int seqlock_try_read(const seqlock_pair_t *sl, uint64_t *a, uint64_t *b);

seqlock_version_guard_d57_err_t seqlock_version_guard_d57_validate_len(size_t n);
uint64_t seqlock_version_guard_d57_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t seqlock_version_guard_d57_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
seqlock_version_guard_d57_err_t seqlock_version_guard_d57_verify_guard(bool cond);

#endif /* SEQLOCK_VERSION_GUARD_D57_INTERFACE_H */
