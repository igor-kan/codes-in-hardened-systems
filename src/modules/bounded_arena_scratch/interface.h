#ifndef BOUNDED_ARENA_SCRATCH_INTERFACE_H
#define BOUNDED_ARENA_SCRATCH_INTERFACE_H

#include "types.h"
#include "errors.h"

bounded_arena_scratch_err_t arena_init(guarded_arena_t* a, uint8_t* buf, size_t total_bytes);
void* arena_alloc_aligned(guarded_arena_t* a, size_t size, size_t align);
bounded_arena_scratch_err_t arena_rewind(guarded_arena_t* a, size_t mark);
bounded_arena_scratch_err_t arena_check_canary(const guarded_arena_t* a);
size_t arena_fast_remaining(const guarded_arena_t* a);
void arena_parallel_smoke(size_t n_threads, size_t alloc_bytes, int* out_ok);
bounded_arena_scratch_err_t verify_arena_bounds(void);

#endif /* BOUNDED_ARENA_SCRATCH_INTERFACE_H */
