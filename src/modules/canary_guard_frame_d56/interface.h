#ifndef CANARY_GUARD_FRAME_D56_INTERFACE_H
#define CANARY_GUARD_FRAME_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

void guard_seal(guarded_frame_t *f, uint64_t secret_cookie, uint64_t d0, uint64_t d1);
int guard_verify(const guarded_frame_t *f, uint64_t secret_cookie);

canary_guard_frame_d56_err_t canary_guard_frame_d56_validate_len(size_t n);
uint64_t canary_guard_frame_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t canary_guard_frame_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
canary_guard_frame_d56_err_t canary_guard_frame_d56_verify_guard(bool cond);

#endif /* CANARY_GUARD_FRAME_D56_INTERFACE_H */
