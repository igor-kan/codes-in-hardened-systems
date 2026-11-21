#ifndef BOUNDED_ARENA_BUMP_D56_INTERFACE_H
#define BOUNDED_ARENA_BUMP_D56_INTERFACE_H

#include "types.h"
#include "errors.h"

void bump_init(bump_arena_t *a, uint8_t *buf, size_t cap);
uint8_t *bump_alloc(bump_arena_t *a, size_t sz, size_t align);
void bump_reset(bump_arena_t *a);

bounded_arena_bump_d56_err_t bounded_arena_bump_d56_validate_len(size_t n);
uint64_t bounded_arena_bump_d56_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t bounded_arena_bump_d56_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
bounded_arena_bump_d56_err_t bounded_arena_bump_d56_verify_guard(bool cond);

#endif /* BOUNDED_ARENA_BUMP_D56_INTERFACE_H */
