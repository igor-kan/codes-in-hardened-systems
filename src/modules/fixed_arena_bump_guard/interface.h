#ifndef FIXED_ARENA_BUMP_GUARD_INTERFACE_H
#define FIXED_ARENA_BUMP_GUARD_INTERFACE_H

#include "types.h"
#include "errors.h"

fixed_arena_bump_guard_err_t garena_init(guarded_arena_t* a, uint8_t* backing, size_t cap);
void* garena_alloc(guarded_arena_t* a, size_t size, size_t align);
void garena_reset_wipe(guarded_arena_t* a);
fixed_arena_bump_guard_err_t garena_check_canary(const guarded_arena_t* a);
fixed_arena_bump_guard_err_t garena_validate(const guarded_arena_t* a);
fixed_arena_bump_guard_err_t garena_mt_scratch_test(size_t n_threads);
fixed_arena_bump_guard_err_t garena_verify_invariants(guarded_arena_t* a);

#endif /* FIXED_ARENA_BUMP_GUARD_INTERFACE_H */
