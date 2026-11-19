#ifndef ARENA_BUMP_WATERMARK_C_INTERFACE_H
#define ARENA_BUMP_WATERMARK_C_INTERFACE_H

#include "types.h"
#include "errors.h"

void sarena_init(safe_arena_t* a);
void* sarena_alloc(safe_arena_t* a, size_t size, size_t align);
bool sarena_audit(const safe_arena_t* a);
void sarena_reset(safe_arena_t* a);

arena_bump_watermark_c_err_t arena_bump_watermark_c_validate_len(size_t n);
uint64_t arena_bump_watermark_c_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t arena_bump_watermark_c_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
arena_bump_watermark_c_err_t arena_bump_watermark_c_verify_guard(bool cond);

#endif /* ARENA_BUMP_WATERMARK_C_INTERFACE_H */
